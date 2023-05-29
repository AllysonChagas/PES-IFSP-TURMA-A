/*
Faça um programa utilizando C++ para gerar uma tela como as que podem ser visualizadas nas
Figuras abaixo. (0.5 pontos)
Observações:
a) O usuário deve digitar sua idade.
b) Idade maior ou igual a 65 anos, o usuário poderá ser atendido em caixa preferencial. Idade menor que 65
anos, o usuário será atendido nos caixas convencionais (caixa 2, caixa 3, caixa 4).
c) A formatação da tela de execução é importante;
d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da
execução do programa.
 */

#include <cstdlib>
#include <iostream>
#include <locale>


using namespace std;

int main(int argc, char** argv) {
    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    if (idade >= 65) {
        cout << "Voce pode ser atendido em fila preferencial." << endl << endl;
        cout << "Dirija-se ao caixa 1";
    } else {
        cout << "Você será atendido nos caixas convencionais." << endl;
        cout << "Dirija-se a um dos caixas:" << endl;
        cout << "Caixa 2" << endl;
        cout << "Caixa 3" << endl;
        cout << "Caixa 4";
    }
    return 0;

}