#include <string>
#include "gerente.hpp"
#include "funcionario.hpp"
#include "autenticavel.hpp"

Gerente::Gerente(std::string nome, Cpf cpf, float salario, std::string senha) :
	Funcionario(nome, cpf, salario),
	Autenticavel(senha)
{}

float Gerente::bonificacao() const {
	return pegaSalario() * 0.15;
}
