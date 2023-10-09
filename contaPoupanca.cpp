#include <iostream>
#include "contaPoupanca.hpp"
#include "conta.hpp"

ContaPoupanca::ContaPoupanca(std::string numeroAcesso, Titular titular):
	Conta(numeroAcesso, titular)
{}

float ContaPoupanca::valorTaxa() const {
	return 0.03;

}
