#pragma once
#include <string>
#include "cpf.hpp"

class Titular {
private:
	std::string nome;
	Cpf cpf;

public:
	Titular(std::string nome, Cpf cpf);
	std::string pegaNome();
	void verificacaoNome();

};