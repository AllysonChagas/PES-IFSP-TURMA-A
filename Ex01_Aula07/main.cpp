/*
 Exercício: Elaborar um algoritmo que seja capaz de
armazenar 15 números inteiros em um vetor,
imprimir cada número com a informação se ele é par
ou ímpar
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int const tamanho = 5;
    int numeros[tamanho], i = 0, j = 0;

    for (i = 0; i < tamanho; i++) {
        cout << "Informe o " << (i + 1) << "º número: ";
        cin >> numeros[i];
    }
    for (j = 0; j < tamanho; j++) {
        if (numeros[j] % 2 == 0) {
            cout << "\nO número " << numeros[j] << " é par." << endl;
        } else {
            cout << "O número " << numeros[j] << " é ímpar." << endl;
        }
    }

    return 0;
}

