#pragma once
#include <string>
#include "cpf.hpp"

class Pessoa {
protected:
	std::string nome;
	Cpf cpf;

public:
	Pessoa(std::string nome, Cpf cpf);

private:
	void verificacaoNome();
};