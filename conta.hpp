#pragma once
#include <string>
#include "titular.hpp"

class Conta {
protected:
	float saldo;
	float limite;

private:
	std::string numeroAcesso;
	Titular titular;
	static int contasCriadas;

public:
	Conta(std::string numeroAcesso, Titular titular);
	virtual ~Conta();
	virtual float valorTaxa() const = 0;
	void sacar(const float& valorSaque);
	void depositar(const float& valorDeposito);
	void extrato();
	std::string pegaNumeroAcesso();
	static int pegaContasCriadas();

private:
	void verificacaoNumeroAcesso();

};
