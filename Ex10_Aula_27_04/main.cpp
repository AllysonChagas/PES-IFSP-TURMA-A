/*
 Escrever um programa que lê o número de identificação de um aluno (matrícula), 3 notas
obtidas na nas atividades da disciplina. Calcular a média de aproveitamento, usando a
fórmula:
𝑀𝐴 =
𝑁1 + 𝑁2 ∗ 2 + 𝑁3 ∗ 3
6
A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento Conceito
9,0 A
7,5 e < 9,0 B
6,0 e < 7,5 C
4,0 e < 6,0 D
< 4,0 E
O programa deve escrever o número do aluno (matrícula), suas notas, a média de
aproveitamento e o conceito correspondente. De acordo com o conceito exiba a mensagem:
APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
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
    int matricula;
    float n1, n2, n3, media;

    cout << "Informe o número de sua matrícula: ";
    cin >> matricula;
    cout << "Informe o valor das três notas obtidas nas atividades da disciplina: ";
    cin >> n1 >> n2>> n3;
    media = (n1 + (n2 * 2)+(n3 * 3)) / 6;

    if (media == 9) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: A" << endl;
        cout << "Aprovado";
    } else if (media >= 7.5 && media < 9) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: B" << endl;
        cout << "Aprovado";
    } else if (media >= 6 && media < 7.5) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: C" << endl;
        cout << "Aprovado";
    } else if (media >= 4 && media <= 6) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: D" << endl;
        cout << "Reprovado";
    } else {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: E" << endl;
        cout << "Reprovado";
    }

    return 0;
}

