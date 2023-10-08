#pragma once
#include <string>
#include "pessoa.hpp"

class Funcionario: public Pessoa {
private:
	float salario;

public:
	Funcionario(std::string nome, Cpf cpf, float salario);
	std::string pegaNome() const;
	float pegaSalario() const;
	float virtual bonificacao() const = 0;

};
