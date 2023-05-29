/*
 strcat: Usada para unir duas strings. Sua
sintaxe é: strcat(destino, origem)
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
    cout << "Unindo Palavra 1 e Palavra 2 temos: " << strcat(palavra2, palavra1) << endl;

    return 0;
}