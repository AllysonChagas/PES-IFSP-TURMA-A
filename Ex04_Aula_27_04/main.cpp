/*Construa um programa em C++ que receba o nome e o valor de um produto, calcule o valor
do produto após um desconto de 13%. Apresente o resultado como o abaixo:
Produto: <nome do produto>
Valor: <valor original do produto>
Desconto: <valor do desconto>
Valor Final: <valor do produto após o desconto>
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    char nome[30];
    float valor, valorf, desconto;

    cout << "Informe o nome do Produto: ";
    cin >> nome;
    cout << "Informe o valor do Produto: ";
    cin >> valor;
    desconto = valor * 0.13;
    valorf = valor - desconto;

    cout << "Produto: " << nome << endl;
    cout << "Valor: " << valor << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor Final: " << valorf;

    return 0;
}

