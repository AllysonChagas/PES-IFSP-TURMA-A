#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, matriz[3][3];

    //Preenchimento da matriz
    for (i = 0; i < 3; i++) {//linha
        for (j = 0; j < 3; j++) {//coluna
            cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]:" << endl;
            cin >> matriz[i][j];
        }
    }
    cout << endl;

    //mostrando os valores na tela
    for (i = 0; i < 3; i++) {//linha
        for (j = 0; j < 3; j++) {//coluna
            if (i == j) {
                cout << matriz[i][j] << "\t";
            }
            cout << setw(3);
        }
        cout << endl;
    }

    return 0;
}