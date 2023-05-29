#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int qtd, media = 0, i;

    cout << "Informe quantas notas você quer informar: ";
    cin >> qtd;
    int notas[qtd];

    for (i = 0; i < qtd; i++) {
        cout << "Digite a nota do aluno " << (i + 1) << ": " << endl;
        cin >> notas[i];
        media += notas[i];
    }
    cout << "\nMedia das notas = " << (media / qtd) << endl;
    return 0;
}

