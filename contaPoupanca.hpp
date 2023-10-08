#pragma once
#include "conta.hpp"

class ContaPoupanca: public Conta {
public:
	ContaPoupanca(std::string numeroAcesso, Titular titular);
	float valorTaxa() const override;

};
