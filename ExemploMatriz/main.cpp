#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, matriz[2][3];

    //Preenchimento da matriz
    for (i = 0; i < 2; i++) {//linha
        for (j = 0; j < 3; j++) {//coluna
            cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]:" << endl;
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    
    //mostrando os valores na tela
    for (i = 0; i < 2; i++) {//linha
        for (j = 0; j < 3; j++) {//coluna
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

