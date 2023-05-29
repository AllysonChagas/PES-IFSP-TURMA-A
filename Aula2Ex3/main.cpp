#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

    int num1, num2, num3;
    float soma, media;

    cout << "Informe o primeiro número: ";
    cin >> num1;
    cout << "Informe segundo número: ";
    cin >> num2;
    cout << "Informe o terceiro número: ";
    cin >> num3;

    soma = num1 + num2 + num3;

    media = soma / 3;

    cout << "A soma dos 3 número resulta em: " << soma << ", e a média deles resulta em: " << media;
    return 0;
}