#pragma once
#include <string>
#include <iostream>
#include <utility>
#include <variant>
#include "titular.hpp"
#include "conta.hpp"

class Conta {
protected:
	float saldo;
	float limite;

private:
	std::string numeroAcesso;
	Titular titular;
	static int contasCriadas;

public:
	enum resultadoSaque {Valido, Negativo, Insuficiente};
	Conta(std::string numeroAcesso, Titular titular);
	virtual ~Conta();
	virtual float valorTaxa() const = 0;
	std::variant<resultadoSaque, float> sacar(const float& valorSaque);
	void depositar(const float& valorDeposito);
	void operator+=(const float& valorDeposito);
	float extrato();
	std::string pegaNumeroAcesso();
	static int pegaContasCriadas();
	bool operator<(Conta& contaComparacao);
	friend std::ostream& operator<<(std::ostream& cout, Conta& conta);

private:
	void verificacaoNumeroAcesso();

};
