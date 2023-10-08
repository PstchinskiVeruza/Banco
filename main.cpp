#include <iostream>
#include "titular.hpp"
#include "contaPoupanca.hpp"
#include "contaCorrente.hpp"
#include "conta.hpp"
#include "cpf.hpp"
#include "funcionario.hpp"
#include "gerente.hpp"
#include "caixa.hpp"

using namespace std;

std::string autentico(Autenticavel& autenticando, std::string senha) {
	if (autenticando.autenticacao(senha)) {
		return "Validado";
	}

	return "Não identificado";
}

int main() {
	Titular titular1("Pedro", Cpf("123.456.789-10"), "951413");
	ContaPoupanca conta1("333", titular1);

	Titular titular2("Rafael", Cpf("109.876.543-21"), "951413");
	ContaCorrente conta2("666", titular2);

	Gerente gerente("Jorge", Cpf("999.666.333-20"), 2400, "000000");

	Caixa caixa("Cleber", Cpf("333.666.999-36"), 1500, "999999");

	conta1.depositar(120);
	conta2.depositar(120);

	conta2.transferir(conta1, 10);

	cout << caixa.pegaNome() << endl;

	cout << Conta::pegaContasCriadas() << endl;

	conta1.extrato();
	conta2.extrato();

	cout << autentico(titular1, "951413") << endl;

}
