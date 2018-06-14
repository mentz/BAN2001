#include <iostream>
#include <stringstream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Operation
{
	enum tipo {START, READ, WRITE, COMMIT};
	string dado;
};

struct Transaction
{
	int qtde;
	vector<Operation> operacoes;
};

vector<Transaction> transacoes;

int main(int argc, char **argv)
{
	// Formato das entradas: (linhas)
	// <operacao> <id_transacao> [<operando>]
	// Exemplo:
	// s 1 
	// r 1 x
	// w 1 x
	// t 1
	int tid;
	char op;
	string var;

	while (cin >> tid >> op)
	{
		/*
		switch (op):
		{
			case 's':
				if (!iniciaTransacao(tid))
				{
					cout << "Transação já existe\n";
					return 1;
				}
				break;
			case 'r':
				cin >> var;
				if (!leVariavel(var))
				{
					cout << "Transação não-serializável\n";
					return 1;
				}
				break;
			case 'w':
				cin >> var;
				if (!escreveVariavel(var))
				{

				}
				break;
		}
		*/
		// Refazer com criacao de todas as possibilidades de
		// transacoes seriais e comparar com a historia apresentada
	}

	return 0;
}
