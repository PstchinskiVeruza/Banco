#pragma once
#include <string>
#include "funcionario.hpp"
#include "autenticavel.hpp"
#include "cpf.hpp"

class Caixa final : public Funcionario, public Autenticavel {
public:
	Caixa(std::string nome, Cpf cpf, float salario, std::string senha);
	float bonificacao() const override;

};