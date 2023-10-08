#pragma once
#include "conta.hpp"

class ContaCorrente : public Conta {
public:
	ContaCorrente(std::string numeroAcesso, Titular titular);
	float valorTaxa() const override;
	void transferir(Conta& contaDeposito, const float& valorTransferencia);

};