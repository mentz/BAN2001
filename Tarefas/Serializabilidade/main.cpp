#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

map<string, int> locks; // variavel 'a'  esta com 'tal' transacao
map<int, int> transacoes; // guarda transacoes ativas

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
