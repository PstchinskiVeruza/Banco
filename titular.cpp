#include <string>
#include <iostream>
#include "titular.hpp"

Titular::Titular(std::string nome, Cpf cpf):
	nome(nome), 
	cpf(cpf)
{
	verificacaoNome();
}

std::string Titular::pegaNome() {
	return nome;
}

void Titular::verificacaoNome() {
	if (nome.size() < 5) {
		std::cout << "Nome inválido" << std::endl;

		exit(0);
	}

}