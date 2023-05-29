/*
Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura
abaixo. (1.0 ponto)
Observações:
d. O usuário deve digitar um número inteiro, entre 1 e 9, para que seja feita a tabuada.
e. A formatação da tela de execução é importante.
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int num, i = 1;
    float op = 0;

    cout << "Informe um número de 1 a 9 para que seja apresentada a Tabuada: ";
    cin >> num;


    switch (num) {
        case 1:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 2:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 3:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 4:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 5:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 6:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 7:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 8:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        case 9:
            for (i >= 1; i <= 10; i++) {
                op = num * i;
                cout << num << " X " << i << " = " << op << endl;
            }
            break;
        default:
            cout << "Digite um número válido!";
            break;
    }

    return 0;
}

