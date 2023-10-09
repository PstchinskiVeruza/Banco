#include <string>
#include <iostream>
#include "pessoa.hpp"

Pessoa::Pessoa(std::string nome, Cpf cpf) :
	nome(nome),
	cpf(cpf)
{
	verificacaoNome();

}

std::string Pessoa::pegaNome() {
	return nome;

}

void Pessoa::verificacaoNome() {
	if (nome.size() < 5) {
		std::cout << "Nome inválido" << std::endl;

		exit(0);
	}

}
