/*
 Funções para manipulação de Strings:
• strset: Usada para substituir todos os caracteres da
string pelo mesmo caractere. Sua sintaxe é:
strset(string,caractere).
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    char palavra[20];

    cout << "Exemplo que substitui caracter de uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;

    fill(palavra, palavra + strlen(palavra), '*');

    cout << "Substituindo: " << palavra << endl;

    return 0;
}
