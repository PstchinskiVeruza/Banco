#include <iostream>
#include "conta.hpp"
#include "titular.hpp"
#include "cpf.hpp"

using namespace std;

int main() {
	Titular titular1("Pedro", Cpf("123.456.789-10"));
	Conta conta1("333", titular1);

	Titular titular2("Rafael", Cpf("109.876.543-21"));
	Conta conta2("666", titular2);

	conta1.depositar(120);

	conta2.depositar(120);

	conta1.transferir(conta2, 120);

	cout << Conta::pegaContasCriadas() << endl;

	conta1.extrato();
	conta2.extrato();

}
