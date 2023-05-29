/*
Escreva um programa para ler um número inteiro (considere que serão lidos apenas valores
positivos e inteiros) e escrever se é par ou ímpar.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int num;

    cout << "Informe um número: ";
    cin >> num;

    if (num >= 0) {
        if (num % 2 == 0) {
            cout << "O número é Par";
        } else {
            cout << "O número é Ímpar";
        }
    }else{
        cout << "Digite um número inteiro positivo!";
    }


    return 0;
}

