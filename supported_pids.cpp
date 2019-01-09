// supported_pids.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

// C++ program to convert a decimal 
// number to hexadecimal number 
using namespace std;

// function to convert decimal to hexadecimal 
void decToHexa(int n)
{
	// char array to store hexadecimal number 
	char hexaDeciNum[100];

	// counter for hexadecimal number array 
	int i = 0;
	while (n != 0)
	{
		// temporary variable to store remainder 
		int temp = 0;

		// storing remainder in temp variable. 
		temp = n % 16;

		// check if temp < 10 
		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	// printing hexadecimal number array in reverse order 
	for (int j = i - 1; j >= 0; j--)
		cout << hexaDeciNum[j];
}
#include <string.h>
// Driver program to test above function 
int main()
{
	int n = 2545;

	decToHexa(n);
	cout << endl;
	string a = "0x1A";
	cout << (int)a;
	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
