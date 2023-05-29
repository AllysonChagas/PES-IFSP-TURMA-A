/*
 Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para
feminino), construa um programa que calcule o peso ideal de uma pessoa, utilizando as
seguintes fórmulas:
- para pessoa do sexo masculino: peso Ideal = (72.7*h)-58
- para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
Exiba as informações incluindo o peso ideal.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(int argc, char** argv) {
    float altura, pesoIdeal;
    char sexo;

    cout << "Infome sua altura: ";
    cin >> altura;
    cout << "Informe seu sexo(F para Feminino ou M para Masculino): ";
    cin >>sexo;
    sexo = toupper(sexo);

    cout << setprecision(2);
    
    switch (sexo) {
        case 'M':
            pesoIdeal = (72.7 * altura) - 58;
            cout << "Seu peso ideal é: " << pesoIdeal;
            break;
        case 'F':
            pesoIdeal = (62.1 * altura) - 47.7;
            cout << "Seu peso ideal é: " << pesoIdeal;
            break;
    }

    return 0;
}

