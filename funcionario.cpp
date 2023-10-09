#include <string>
#include "funcionario.hpp"
#include "pessoa.hpp"

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario, DiaSemana diaPagamento):
	Pessoa(nome, cpf), 
	salario(salario)
{}

std::string Funcionario::pegaNome() const {
	return nome;

}

float Funcionario::pegaSalario() const {
	return salario;

}
