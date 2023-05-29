/*
Faça um programa para ler N números inteiros – informe um de cada vez. A repetição será
encerrada quando o usuário digitar o número 0. O programa deve informar quantos
números foram digitados. 
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    int cont = 0, num = 1;

    while (num != 0) {
        cout << "Informe um número inteiro: ";
        cin >> num;
        if (num != 0) {
            cont = cont + 1;
        }
    }
    cout << "Você informou " << cont << " números inteiros.";
    return 0;
}

