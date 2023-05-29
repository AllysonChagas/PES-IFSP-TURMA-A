/*
 Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura
abaixo. (0.3 pontos)
Observações:
a) Em Aluno: deve ser colocado o seu nome;
b) Em Matrícula: deve ser colocado a sua matrícula no IFSP;
c) A formatação da tela de execução é importante;
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    string nome = "Allyson Chagas";
    string matricula = "VP3004015";

    cout << "PES - Programação Estruturada - Turma A." << endl << endl;
    cout << "Prova Bimestral" << endl << endl;
    cout << "Valor - 4.0 pontos" << endl << endl;
    cout << "Aluno: " << nome << endl;
    cout << "Matrícula: " << matricula;

    return 0;
}

