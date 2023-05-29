#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, k, matriz[6][3][3];

    //Preenchimento da matriz
    for (k = 0; k < 7; k++) {//lado
        for (i = 0; i < 2; i++) {//linha
            for (j = 0; j < 3; j++) {//coluna
                cout << "Digite o valor para preencher a matriz [" << k << ", " << i << ", " << j << "]:" << endl;
                cin >> matriz[k][i][j];
            }
        }
    }

    cout << endl;

    //mostrando os valores na tela
    for (k = 0; k < 7; k++) {
        for (i = 0; i < 2; i++) {//linha
            for (j = 0; j < 3; j++) {//coluna
                cout << matriz[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}
