#include <string>
#include "titular.hpp"
#include "pessoa.hpp"
#include "autenticavel.hpp"

Titular::Titular(std::string nome, Cpf cpf, std::string senha): 
	Pessoa(nome, cpf),
	Autenticavel(senha)
{}
