/*
 Escreva um programa para determinar o maior de três números dados.
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float num1, num2, num3, maior;

    cout << "Informe o Primeiro número: ";
    cin >> num1;
    cout << "Informe o Segundo número: ";
    cin >> num2;
    cout << "Informe o Terceiro número: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3 && num1 != num2 && num1 != num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3 && num2 != num1 && num2 != num3) {
        maior = num2;
    } else if (num3 > num1 && num3 > num2 && num3 != num1 && num3 != num2) {
        maior = num3;
    } else if (num1 == num2 || num1 == num3) {
        maior = num1;
    } else {
        maior = num3;
    }

    cout << "O maior número é o: " << maior;

    return 0;
}

