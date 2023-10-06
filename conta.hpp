#pragma once
#include <string>
#include "titular.hpp"

class Conta {
private:
	static int contasCriadas;

public:
	static int pegaContasCriadas();

private:
	std::string numeroAcesso;
	float saldo;
	float limite;
	Titular titular;

public:
	Conta(std::string numeroAcesso, Titular titular);
	~Conta();
	std::string pegaNumeroAcesso();
	void sacar(const float& valorSaque);
	void depositar(const float& valorDeposito);
	void transferir(Conta& contaDeposito, const float& valorTransferencia);
	void extrato();
	void verificacaoNumeroAcesso();

};