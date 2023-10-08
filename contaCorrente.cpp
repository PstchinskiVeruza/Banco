#include <iostream>
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

	this->sacar(valorTransferencia);

	contaDeposito.depositar(valorTransferencia);
}
