/*
 Construir um programa que calcule a média aritmética de 20 valores inteiros positivos,
fornecidos pelo usuário. Exiba o resultado da média.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>


using namespace std;

int main(int argc, char** argv) {
    int i=1, valor;
    float soma = 0, media;

    for (i >= 0; i <= 20; i++) {
        cout << "Informe um valor inteiro positivo: ";
        cin >> valor;
        soma += valor;
    }
    media = soma / 20;
    cout << "A média aritmética dos 20 valores positivos é: " << media;

    return 0;
}

