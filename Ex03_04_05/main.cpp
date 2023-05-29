/*
 strcpy: Usada para copiar uma string em outra.
Sua sintaxe é: strcpy(destino, origem).
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1 : " << endl;
    cin >> palavra1;
    cout << "Digite a palavra 2 : " << endl;
    cin >> palavra2;
    cout << "Palavra 1 = " << palavra1 << endl;
    cout << "Palavra 2 = " << palavra2 << endl;
    cout << "Agora Palavra 2 = " << strcpy(palavra2, palavra1) << endl;

    
    return 0;
}
