#include <string>
#include "caixa.hpp"
#include "funcionario.hpp"
#include "autenticavel.hpp"

Caixa::Caixa(std::string nome, Cpf cpf, float salario, DiaSemana diaPagamento, std::string senha) :
	Funcionario(nome, cpf, salario, diaPagamento),
	Autenticavel(senha)
{}

float Caixa::bonificacao() const {
	return pegaSalario() * 0.2;

}
