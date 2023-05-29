/*
 A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura deseja saber:
• média do salário da população;
• média do número de filhos;
• maior salário; . 
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    float salario = 0, maiorSalario = 0, mediaFilhos, mediaSalario, somaSalario = 0, somaFilhos = 0;
    int i = 1, nFilhos;

    for (i >= 0; i <= 5; i++) {
        //salarioAnterior = salario;
        cout << "Informe seu salário: ";
        cin >> salario;
        cout << "Infome quantos filhos você tem: ";
        cin >> nFilhos;
        somaSalario += salario;
        somaFilhos += nFilhos;
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
    }
    mediaFilhos = somaFilhos / 5;
    mediaSalario = somaSalario / 5;
    cout << setprecision(6);
    cout << "Media do salario da população: " << mediaSalario << endl;
    cout << "Media do número de filhos da população: " << mediaFilhos << endl;
    cout << "Maior salário da população: " << maiorSalario;
    return 0;
}

