/*
 Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura
abaixo. (0.5 pontos)
Observações:
a) O usuário deve digitar um valor de 1 até 5 para escolher uma das opções (Somar, Subtrair, Dividir,
Multiplicar ou Sair). Escolhendo uma das opções matemáticas, deverá ser informado dois números.
Esses números serão utilizados para realizar a operação matemática selecionada.
b) Se o usuário digitar uma opção que não esteja no MENU, o sistema deve mandar uma mensagem de
opção inválida.
c) A formatação da tela de execução é importante;
d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int opcao, n1, n2;
    float operacao;

    cout << "Escolha uma das Opções:" << endl;
    cout << "1 - para SOMAR" << endl;
    cout << "2 - para SUBTRAIR" << endl;
    cout << "3 - para DIVIDIR" << endl;
    cout << "4 - para MULTIPLICAR" << endl;
    cout << "5 - para SAIR" << endl;

    cout << endl << "Informe a Opção Desejada: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            operacao = n1 + n2;
            cout << endl << "A soma é: " << operacao;
            break;
        case 2:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            operacao = n1 - n2;
            cout << endl << "A subtração é: " << operacao;
            break;
        case 3:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            operacao = n1 / n2;
            cout << endl << "A divisão é: " << operacao;
            break;
        case 4:
            cout << endl << "Digite o primeiro número: ";
            cin >> n1;
            cout << endl << "Digite o segundo número: ";
            cin >> n2;
            operacao = n1 * n2;
            cout << endl << "A multiplicação é: " << operacao;
            break;
        case 5:
            break;
        default:
            cout << "Opção Inválida!";
            break;
    }

    return 0;
}

