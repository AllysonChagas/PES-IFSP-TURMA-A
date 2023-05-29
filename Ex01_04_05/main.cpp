/*
 Fazer um programa para solicitar nome completo de uma pessoa,
 * 3 notas e gerar sua média
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
//#include <locale>
//#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n1, n2, n3;
    float media;
    string nomeCompleto;

    cout << "Informe seu nome completo: ";
    getline(cin, nomeCompleto);
    cout << "Informe 3 notas: ";
    cin >> n1 >> n2 >> n3;
    media = (n1 + n2 + n3) / 3;

    cout << "Seu nome completo é: " << nomeCompleto << endl << "A média das 3 notas é: " << setprecision(2) << media;
    return 0;
}

