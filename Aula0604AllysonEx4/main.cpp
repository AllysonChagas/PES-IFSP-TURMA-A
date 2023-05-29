/*
 Escreva um programa que recebe dois números e retorna o maior deles.
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float num1, num2, maior;

    cout << "Informe o Primeiro número: ";
    cin >> num1;
    cout << "Informe o Segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        maior = num1;
    } else {
        maior = num2;
    }

    cout << "O maior número é o: " << maior;

    return 0;
}

