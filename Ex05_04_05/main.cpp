/*
 strcmp: Usada para verificar se duas strings são
iguais. Esta função retorna 0 se as strings são iguais.
Sua sintaxe é: strcmp(string1,string2) . 
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
    
    if(strcmp(palavra1, palavra2) == 0){
        cout << "As palavras são iguais!";
    }
    else{
        cout << "As palavras são diferentes!";
    }

    return 0;
}