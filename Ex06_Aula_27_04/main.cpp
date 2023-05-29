/*
Reescreva o programa do exercício anterior (exercício 6) considerando o zero como neutro,
ou seja, se for digitado o valor zero, escrever a palavra zero.
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
    if (valor > 0) {
        cout << "Positivo";
    } else if (valor == 0) {
        cout << "Zero";
    } else {
        cout << "Negativo";
    }
    return 0;
}

