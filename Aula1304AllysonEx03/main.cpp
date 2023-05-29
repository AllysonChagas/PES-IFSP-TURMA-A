/*
 Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir,
multiplicar ou sair do programa.
• Caso ele queira somar (+), deverá informar dois números e o computador informará
o resultado da soma.
• Caso ele queira subtrair (-), deverá informar dois números e o computador informará
o resultado da subtração.
• Caso ele queira dividir (/), deverá informar dois números e o computador informará o
resultado da divisão.
• Caso ele queira multiplicar (*), deverá informar dois números e o computador
informará o resultado da multiplicação.
• Se o usuário quiser sair do programa informará tal opção (S).
• Para qualquer outro caso o computador deverá informar (Opção inválida).
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>
#include <cctype>

using namespace std;

int main(int argc, char** argv) {

    char operacao;
    float num1, num2, soma, subtracao, divisao, multiplicacao;

    cout << "Escolha uma operação: \n";
    cout << "\033[1m+\033[0m para Soma\n" << "\033[1m-\033[0m para Subtração\n" << "\x1B[1m" << "/" << "\x1B[0m para Divisão\n" << "\033[1m*\033[0m para Multiplicação\n" << "\033[1mS\033[0m para Sair do programa\n";
    cin >> operacao;
    operacao = toupper(operacao);

    switch (operacao) {
        case '+':
            cout << "Infrome o primeiro número: ";
            cin >> num1;
            cout << "Infrome o segundo número: ";
            cin >> num2;

            soma = num1 + num2;

            cout << "O resultado da soma é: " << soma;
            break;
        case '-':
            cout << "Infrome o primeiro número: ";
            cin >> num1;
            cout << "Infrome o segundo número: ";
            cin >> num2;

            subtracao = num1 - num2;

            cout << "O resultado da subtração é: " << subtracao;
            break;
        case '/':
            cout << "Infrome o primeiro número: ";
            cin >> num1;
            cout << "Infrome o segundo número: ";
            cin >> num2;

            divisao = num1 / num2;

            cout << "O resultado da divisão do numero " << num1 << " pelo número " << num2 << " é: " <<
                    setprecision(2) << divisao;
            break;
        case '*':
            cout << "Infrome o primeiro número: ";
            cin >> num1;
            cout << "Infrome o segundo número: ";
            cin >> num2;

            multiplicacao = num1 * num2;

            cout << "O resultado da multiplicação é: " << multiplicacao;
            break;
        case 'S':
            break;
        default:
            cout << "Você informou uma entrada inválida!";
    }

    return 0;
}

