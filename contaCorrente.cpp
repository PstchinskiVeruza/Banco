#include <iostream>
#include <utility>
#include "contaCorrente.hpp"
#include "conta.hpp"

ContaCorrente::ContaCorrente(std::string numeroAcesso, Titular titular) :
	Conta(numeroAcesso, titular)
{}

float ContaCorrente::valorTaxa() const {
	return 0.05;

}

void ContaCorrente::transferir(Conta& contaDeposito, const float& valorTransferencia) {
	if (this == &contaDeposito) {
		std::cout << "Transferência inválida" << std::endl;
	}

	auto validacaoNovoSaldo = this->sacar(valorTransferencia);

	if (auto saldo = std::get_if<float>(&validacaoNovoSaldo)) {
		contaDeposito.depositar(valorTransferencia);
		std::cout << "Novo saldo " << (*saldo) << std::endl;

	}
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem) {
	contaOrigem.transferir(*this, contaOrigem.extrato() / 2);

}
