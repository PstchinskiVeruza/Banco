#include <string>
#include "autenticavel.hpp"

Autenticavel::Autenticavel(std::string senha) : 
	senha(senha)
{}

bool Autenticavel::autenticacao(std::string senha) {
	if (senha == this->senha) {
		return true;
	}

	return false;

}
