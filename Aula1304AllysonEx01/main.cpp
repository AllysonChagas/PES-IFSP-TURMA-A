/*
Crie um programa para exibir o nome dos times (São Paulo, Santos, Palmeiras e Corinthians)
na tela e que permita ao usuário a escolha de uma opção. Imprima uma mensagem sobre o
time escolhido.
Exemplo :
1 – São Paulo
2 - Santos
3 - Palmeiras
4 – Corinthians
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int time;
    cout << "Escolha um time dos listados abaixo, informando o número do respectivo time: \n";
    cout << "1 - São Paulo\n" << "2 - Santos\n" << "3 - Palmeiras\n" << "4 - Corinthians\n";
    cin >> time;

    if (time == 1) {
        cout << "Só os fortes vestem essa camisa!";
    } else if (time == 2) {
        cout << "O Santos vai golear, caiu na rede é peixe!";
    } else if (time == 3) {
        cout << "Não tem mundial!";
    } else if (time == 4) {
        cout << "O Corinthians é mais que a Seleção Brasileira, o Corinthians é uma eterna religião, amor e paixão";
    } else {
        cout << "Você informou uma entrada inválida!";
    }

    return 0;
}

