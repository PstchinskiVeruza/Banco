#include <string>
#include <iostream>
#include "pessoa.hpp"

Pessoa::Pessoa(std::string nome, Cpf cpf) :
	nome(nome),
	cpf(cpf)
{
	verificacaoNome();
}

void Pessoa::verificacaoNome() {
	if (nome.size() < 5) {
		std::cout << "Nome inválido" << std::endl;

		exit(0);
	}

}
