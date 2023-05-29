/*
 strrev: Usada para inverter o conteúdo de uma string.
Sua sintaxe é: strrev(string).
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <cstring>
#include <algorithm> // Inclui a biblioteca algorithm para usar a função std::reverse()

using namespace std;

int main(int argc, char** argv) {
    char palavra[20];

    cout << "Este exemplo inverte uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;

    // Converte a string "palavra" em um objeto std::string
    string palavra_str(palavra);

    // Usa a função std::reverse() para inverter a string
    reverse(palavra_str.begin(), palavra_str.end());

    // Imprime a string invertida
    cout << "A palavra " << palavra << " invertida fica: " << palavra_str << endl;

    return 0;
}


