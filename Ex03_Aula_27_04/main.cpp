/*
 Escreva um programa em C++ para ler o raio de um círculo, calcular e escrever a sua área
e perímetro. Fórmulas: perímetro = 2 𝜋 r 𝐴𝑟𝑒𝑎 = 𝜋𝑟2
onde r é o raio e 𝜋 vale 3.14, ou
pode ser obtido através da biblioteca (cmath), utilizando a constante M_PI.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    float raio, area, perimetro;

    cout << "Informe o valor do raio de um círculo: ";
    cin >> raio;
    area = M_PI*(raio * raio);
    perimetro = (M_PI * 2) * raio;
    cout << setprecision(2);
    cout << "A Área do círculo de raio " << raio << " é " << area << endl;
    cout << "O Perímetro do círculo de raio " << raio << " é " << perimetro;
    return 0;
}

