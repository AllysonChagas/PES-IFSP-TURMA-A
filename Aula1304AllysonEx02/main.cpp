/*
 Faça um programa em C++ para calcular o valor que uma pessoa deve pagar de imposto de
renda. O programa deve pedir o nome e o salário dessa pessoa.
• Se o salário for menor que R$ 2000,00, deve aparecer a mensagem: (“Fulano”, você
tem isenção de pagamento do IRPF);
• Se o salário for maior ou igual a R$ 2000,00, o imposto a ser pago será de 15% do
salário. (IRPF = salário * 0,15). O programa deverá mostrar a mensagem: (“Fulano”,
você deverá pagar “$$$” de IRPF);
• Se o salário for maior ou igual a R$ 3000,00, o imposto a ser pago será de 20% do
salário. (IRPF = salário * 0,20). O programa deverá mostrar a mensagem: (“Fulano”,
você deverá pagar “$$$” de IRPF);
• Se o salário for maior ou igual a R$ 5000,00, o imposto a ser pago será de 23% do
salário. (IRPF = salário * 0,23). O programa deverá mostrar a mensagem: (“Fulano”,
você deverá pagar “$$$” de IRPF);
• Se o salário for maior ou igual a R$ 10000,00, o imposto a ser pago será de 27% do
salário. (IRPF = salário * 0,27). O programa deverá mostrar a mensagem: (“Fulano”,
você deverá pagar “$$$” de IRPF).
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    char nome[20];
    float salario, irpf;

    cout << "Informe seu nome: ";
    cin >> nome;
    cout << "Informe seu salário: ";
    cin >> salario;

    if (salario < 2000) {
        cout << nome << ", você tem isençaõ de pagamento IRPF";
    } else if (salario >= 2000 && salario <= 2999) {
        irpf = salario * 0.15;
        cout << nome << ", você deverá pagar R$" << setprecision(3) << irpf << " de IRPF";
    } else if (salario >= 3000 && salario <= 4999) {
        irpf = salario * 0.20;
        cout << nome << ", você deverá pagar R$" << setprecision(3) << irpf << " de IRPF";
    } else if (salario >= 5000 && salario <= 9999) {
        irpf = salario * 0.23;
        cout << nome << ", você deverá pagar R$" << setprecision(4) << irpf << " de IRPF";
    } else {
        irpf = salario * 0.27;
        cout << nome << ", você deverá pagar R$" << irpf << " de IRPF";
    }

    return 0;
}

