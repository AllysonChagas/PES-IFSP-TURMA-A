/*
 strchr: Usada para encontrar a primeira ocorrência de
um caractere em uma string. Sua sintaxe é:
strchr(string, caractere). 
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    char texto[] = "Este exemplo busca por um determinado caracter dentre uma string.";
    char *ptr;

    cout << "Procurando por 's' no texto: \n\n" << texto << endl << endl;
    ptr = strchr(texto, 's');

    if (*ptr) {
        cout << "A letra s apareceu a primeira vez na posição: " << ptr - texto + 1;
    } else {
        cout << "Letra não encontrada no texto.";
    }

    return 0;
}