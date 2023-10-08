#include <iostream>
#include "conta.hpp"

int Conta::contasCriadas = 0;



Conta::Conta(std::string numeroAcesso, Titular titular):
	numeroAcesso(numeroAcesso), 
	titular(titular),
	saldo(0.0),
	limite(1200.0)
{
	contasCriadas++;

	verificacaoNumeroAcesso();
}

Conta::~Conta() {
	contasCriadas--;
}

void Conta::sacar(const float& valorSaque) {
	float taxaSaque = valorSaque * valorTaxa();
	float totalSaque = valorSaque + taxaSaque;

	if (totalSaque < 0) {
		std::cout << "Valor inválido." << std::endl;

		return;
	}

	if (totalSaque > saldo + limite) {
		std::cout << "Saldo e limite insuficientes" << std::endl;

		return;
	}

	saldo -= totalSaque;

}

void Conta::depositar(const float& valorDeposito) {
	saldo += valorDeposito;

}

void Conta::extrato() {
	std::cout << "Saldo: " << saldo << " com um limite de " << limite << std::endl;

}

std::string Conta::pegaNumeroAcesso() {
	return numeroAcesso;

}

void Conta::verificacaoNumeroAcesso() {
	if (numeroAcesso.size() != 3) {
		std::cout << "Numero de acesso inválido" << std::endl;

		exit(0);
	}
}

int Conta::pegaContasCriadas() {
	return contasCriadas;
}
