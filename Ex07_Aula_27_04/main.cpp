/*
O cardápio de um carrinho de lanche é o seguinte:
Especificação Código Preço
Cachorro quente 100 9,20
Bauru simples 101 12,00
Bauru com ovo 102 13,00
Hamburger 103 10,00
Cheeseburguer 104 12,00
Refrigerante Lata 105 5,00
Água 106 3,00
Escrever um programa que leia o código do item pedido, a quantidade do item e calcule o
valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado
um item. Informe que código inválido caso seja digitado algo diferente.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int cod, qtd;
    float valor;

    cout << "\x1B[1mCardápio de Lanches\x1B[0m" << endl;
    cout << "\x1B[1mEspecificação\x1B[0m " << setw(3) << " \x1B[1mCódigo\x1B[0m " << setw(3) << " \x1B[1mPreço\x1B[0m " << endl;
    cout << "Cachorro Quente" << setw(5) << "100" << setw(5) << " 9.20" << endl;
    cout << "Bauru Simples" << setw(5) << "101" << setw(5) << " 12.00" << endl;
    cout << "Bauru com ovo" << setw(5) << "102" << setw(5) << " 13.00" << endl;
    cout << "Hamburguer" << setw(5) << "103" << setw(5) << " 10.00" << endl;
    cout << "Cheeseburguer" << setw(5) << "104" << setw(5) << " 12.00" << endl;
    cout << "Refrigerante Lata" << setw(5) << "105" << setw(5) << " 5.00" << endl;
    cout << "Água" << setw(5) << "106" << setw(3) << " 3.00" << endl;

    cout << "Informe o código do item pedido: ";
    cin >> cod;
    cout << "Informe a quantidade: ";
    cin >> qtd;
    if (qtd != 0 && qtd >= 0) {
        if (cod == 100) {
            valor = qtd * 9.20;
            cout << "O valor do seu lanche é: " << valor;
        } else if (cod == 101) {
            valor = qtd * 12;
            cout << "O valor do seu lanche é: " << valor;
        } else if (cod == 102) {
            valor = qtd * 13;
            cout << "O valor do seu lanche é: " << valor;
        } else if (cod == 103) {
            valor = qtd * 10;
            cout << "O valor do seu lanche é: " << valor;
        } else if (cod == 104) {
            valor == qtd * 12;
            cout << "O valor do seu lanche é: " << valor;
        } else if (cod == 105) {
            valor = qtd * 5;
            cout << "O valor do seu lanche é: " << valor;
        } else if (cod == 106) {
            valor = qtd * 3;
            cout << "O valor do seu lanche é: " << valor;
        } else {
            cout << "Você Informou um código Inválido";
        }
    } else {
        cout << "Informe uma quantidade válida!";
    }

    return 0;
}

