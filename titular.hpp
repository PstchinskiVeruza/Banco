#pragma once
#include <string>
#include "pessoa.hpp"
#include "autenticavel.hpp"

class Titular: public Pessoa, public Autenticavel {
public:
	Titular(std::string nome, Cpf cpf, std::string senha);

};
