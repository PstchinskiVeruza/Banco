#include <string>
#include "gerente.hpp"
#include "funcionario.hpp"
#include "autenticavel.hpp"

Gerente::Gerente(std::string nome, Cpf cpf, float salario, DiaSemana diaPagamento, std::string senha) :
	Funcionario(nome, cpf, salario, diaPagamento),
	Autenticavel(senha)
{}

float Gerente::bonificacao() const {
	return pegaSalario() * 0.15;

}
