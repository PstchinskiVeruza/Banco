#include <string>
#include "funcionario.hpp"
#include "pessoa.hpp"

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario): 
	Pessoa(nome, cpf), 
	salario(salario)
{}

std::string Funcionario::pegaNome() const {
	return nome;
}

float Funcionario::pegaSalario() const {
	return salario;
}