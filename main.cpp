#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
	char nome_time;
	int vitorias;
	int empates;
	int derrotas;
	int pontuacao_final;
	cout << "Insira a quantidade de vitórias do time: " << endl;
	cin >> vitorias;
	cout << "Insira a quantidade de empates do time: " << endl;
	cin >> empates;
	cout << "Insira a quantidade de derrotas do time: " << endl;
	cin >> derrotas;
	pontuacao_final = (vitorias * 3) + (derrotas * 1);
	cout << "O time obteve " << vitorias << " vitórias, " << empates << " empates e " << derrotas << " derrotas totais. "<<endl;
	cout << "A pontuação do time é de " << pontuacao_final << " pontos."<<endl;
	return 0;
}