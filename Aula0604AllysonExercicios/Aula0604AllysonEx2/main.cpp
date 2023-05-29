/*
Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média. Após
o cálculo, imprima uma mensagem da forma:
“Aluno Fulano possui média 7.0”.
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    char nome[20];
    float nota1, nota2, nota3, media;

    cout << "Informe seu nome: ";
    cin >> nome;
    cout << "Informe a Nota 1: ";
    cin >> nota1;
    cout << "Informe a Nota 2: ";
    cin >> nota2;
    cout << "Informe a Nota 3: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    cout << "Aluno " << nome << " possui media " << setprecision(2) << media;

    return 0;
}

