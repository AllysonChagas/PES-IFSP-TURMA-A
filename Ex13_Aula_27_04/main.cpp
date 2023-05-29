/*
 Escreva um programa que receba 20 números do usuário (um de cada vez). Calcule a média
dos números pares digitados.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>


using namespace std;

int main(int argc, char** argv) {
    int i = 1, iP = 0, valor;
    float soma = 0, media;

    for (i >= 0; i <= 20; i++) {
        cout << "Informe um número inteiro: ";
        cin >> valor;
        if (valor % 2 == 0) {
            soma += valor;
            iP += 1;
        }
    }
    media = soma / iP;
    cout << "A média aritmética dos " << iP << " números pares digitados é: " << media;

    return 0;
}

