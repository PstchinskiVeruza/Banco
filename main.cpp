#include <iostream>
#include "titular.hpp"
#include "contaPoupanca.hpp"
#include "contaCorrente.hpp"
#include "conta.hpp"
#include "cpf.hpp"
#include "funcionario.hpp"
#include "gerente.hpp"
#include "caixa.hpp"
#include "diaSemana.hpp"

using namespace std;

std::string autentico(Autenticavel& autenticando, std::string senha) {
	if (autenticando.autenticacao(senha)) {
		return "Validado";
	}

	return "Não identificado";

}

ostream& operator<<(ostream& cout, Conta& conta) {
	Pessoa titular = conta.titular;
	cout << conta.extrato() << endl;
	cout << titular.pegaNome() << endl;
	return cout;

}

template <typename variavel>
variavel menor(variavel a, variavel b) {
	return a < b ? a : b;

}

int main() {
	Titular titular1("Pedro", Cpf("123.456.789-10"), "951413");
	ContaCorrente conta1("333", titular1);

	Titular titular2("Rafael", Cpf("109.876.543-21"), "951413");
	ContaCorrente conta2("666", titular2);

	Gerente gerente("Jorge", Cpf("999.666.333-20"), 2400, DiaSemana::Terca, "000000");

	Caixa caixa("Cleber", Cpf("333.666.999-36"), 1500, DiaSemana::Quarta,  "999999");

	conta1.depositar(120);
	conta2.depositar(120);

	conta1 += conta2;

	cout << caixa.pegaNome() << endl;

	cout << Conta::pegaContasCriadas() << endl;

	cout << conta1.extrato() << endl;
	cout << conta2.extrato() << endl;

	cout << autentico(titular1, "951413") << endl;

	cout << conta1 << endl;

	conta1.transferir(conta2, 10);

	cout << menor<Conta&>(conta1, conta2) << endl;
}
