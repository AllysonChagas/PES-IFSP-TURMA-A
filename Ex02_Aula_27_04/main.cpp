/*
 Escreva um programa em C++ que exiba as quatro mensagens:
Meu nome é: <seu nome>.
Sou do curso de Sistemas de Informação.
Estou no primeiro ano.
Gosto de programação!!!
 */
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    const char nome[20] = "Allyson";

    cout << "Meu nome é " << nome << "." << endl;
    cout << "Sou do curso de Sistemas de Informação." << endl;
    cout << "Estou no primeiro ano." << endl;
    cout << "Gosto de Programação!!!";

    return 0;
}