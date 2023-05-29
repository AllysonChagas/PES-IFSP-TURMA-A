/*
 Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na
tela o correspondente em Celsius usando a seguinte fórmula:
Celsius = (fahrenheit – 32) * (5.0/9.0).
OBS: Usar uma variável double ou float para ler o valor em Fahrenheit
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

    float grausF, calculoGraus;

    cout << "Informe um valor em graus Fahrenheit: ";
    cin >> grausF;
    calculoGraus = (grausF - 32) * 5/9;

    cout << "O valor da conversão de graus Fahrenheit para Celsius é de: " << calculoGraus << " ºC";
    return 0;
}

