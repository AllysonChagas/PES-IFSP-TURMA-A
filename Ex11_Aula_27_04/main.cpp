/*
 Escrever um programa que leia 15 números, um de cada vez, e conte quantos destes valores
são negativos. Exiba a quantidade de números negativos digitados. 
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 1, iN = 0, num;

    for (i >= 0; i <= 15; i++) {
        cout << "Informe o número " << i << ": ";
        cin >> num;
        if (num < 0) {
            iN += 1;
        }
    }
    cout << "Foram digitados " << iN << " número(s) negativos";
    return 0;
}

