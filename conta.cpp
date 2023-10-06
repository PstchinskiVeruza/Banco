#include <iostream>
#include "conta.hpp"

int Conta::contasCriadas = 0;

Conta::Conta(std::string numeroAcesso, Titular titular):
	numeroAcesso(numeroAcesso), 
	saldo(0), 
	limite (1200), 
	titular(titular) 
{
	contasCriadas++;

	verificacaoNumeroAcesso();
}

Conta::~Conta() {
	contasCriadas--;
}

void Conta::sacar(const float& valorSaque) {
	if (valorSaque < 0) {
		std::cout << "Valor inválido." << std::endl;

		return;
	}

	if (valorSaque > saldo + limite) {
		std::cout << "Saldo e limite insuficientes" << std::endl;

		return;
	}

	saldo -= valorSaque;

}

void Conta::depositar(const float& valorDeposito) {
	saldo += valorDeposito;

}

void Conta::transferir(Conta& contaDeposito, const float& valorTransferencia) {
	this->sacar(valorTransferencia);

	contaDeposito.depositar(valorTransferencia);
}

void Conta::extrato() {
	std::cout << "Saldo: " << saldo << " com um limite de " << limite << std::endl;

}

std::string Conta::pegaNumeroAcesso() {
	return numeroAcesso;

}

int Conta::pegaContasCriadas() {
	return contasCriadas;
}

void Conta::verificacaoNumeroAcesso() {
	if (numeroAcesso.size() != 3) {
		std::cout << "Numero de acesso inválido" << std::endl;

		exit(0);
	}
}
