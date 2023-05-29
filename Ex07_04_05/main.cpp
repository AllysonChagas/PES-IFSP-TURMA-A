/*
 strrchr: Usada para encontrar a última ocorrência de um
caractere em uma string. Sua sintaxe é: strrchr(string, caractere).
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char texto[] = "Este exemplo busca por um determinado caracter dentre de uma string.";
    char *ptr;

    cout << "Procurando por 's' no texto: \n\n" << texto << endl << endl;
    ptr = strrchr(texto, 's');

    if (*ptr) {
        cout << "A letra s apareceu a ultima vez na posição: " << ptr - texto + 1;
    } else {
        cout << "Letra não encontrada no texto.";
    }
    return 0;
}

