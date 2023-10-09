#include <string>
#include <iostream>
#include "cpf.hpp"

Cpf::Cpf(std::string numero): 
	numero(numero)
{
	verificacaoNumero();

}

std::string Cpf::pegaNumero() {
	return numero;

}

void Cpf::verificacaoNumero() {
	if (numero.size() != 14 || numero[3] != '.' || numero[7] != '.' || numero[11] != '-') {
		std::cout << "Cpf inválido" << std::endl;

		exit(0);
	}

}
