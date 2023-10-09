#pragma once
#include <string>
#include "funcionario.hpp"
#include "autenticavel.hpp"
#include "cpf.hpp"
#include "diaSemana.hpp"

class Gerente final : public Funcionario, public Autenticavel {
public:
	Gerente(std::string nome, Cpf cpf, float salario, DiaSemana diaPagamento, std::string senha);
	float bonificacao() const override;

};
