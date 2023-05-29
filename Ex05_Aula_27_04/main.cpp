/*
Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o
valor zero como positivo
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    float valor;

    cout << "Informe um valor: ";
    cin >> valor;
    if (valor >= 0) {
        cout << "Positivo";
    } else {
        cout << "Negativo";
    }
    return 0;
}

