#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    float soma = 0.0;
    const int max = 10;
    int i;

    cout << setprecision(2);
    for (i = 0; i < max; i++) {
        cout << "Nota" << (i + 1) << " = ";
        float nota;
        cin >> nota;
        soma += nota;
    }
    cout << setw(5) << "Média = " << (soma / max) << endl;

    return 0;
}

