#include <iostream>
#include <utility>
#include <variant>
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

std::variant<Conta::resultadoSaque, float> Conta::sacar(const float& valorSaque) {
	float taxaSaque = valorSaque * valorTaxa();
	float totalSaque = valorSaque + taxaSaque;

	if (totalSaque < 0) {
		std::cout << "Saque negativo, valor inválido." << std::endl;

		return Negativo;
	}

	if (totalSaque > saldo + limite) {
		std::cout << "Saque excede saldo e limite, valor inválido" << std::endl;

		return Insuficiente;
	}

	saldo -= totalSaque;

	return saldo;

}

void Conta::depositar(const float& valorDeposito) {
	if (valorDeposito < 0) {
		std::cout << "Deposito negativo, valor inválido." << std::endl;

		return;
	}

	saldo += valorDeposito;

}

void Conta::operator+=(const float& valorDeposito) {
	depositar(valorDeposito);

}

float Conta::extrato() {
	return saldo;

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

bool Conta::operator<(Conta& contaComparacao) {
	return this->extrato() < contaComparacao.extrato();

}
