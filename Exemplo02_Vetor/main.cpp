#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int vetor[5], i, j;

    for (i = 0; i < 5; i++) {
        cout << "Digite um número para armazenar na posição: " << (i) << " do vetor. " << endl;
        cin >> vetor[i];
    }

    for (j = 0; j < 5; j++) {
        cout << "O vetor na posição " << (j) << " é: " << vetor[j] << endl;
    }

    return 0;
}

