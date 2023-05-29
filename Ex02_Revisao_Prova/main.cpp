/*
Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura
abaixo. (0.4 pontos)
Observações:
a) O usuário deve digitar o número de medalhas de OURO, PRATA e BRONZE;
b) No final deve ser somado o número de medalhas de OURO, PRATA e BRONZE para apresentar o total
de medalhas que o Brasil ganhou;
c) A formatação da tela de execução é importante;
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int ouro, prata, bronze, soma;
    
    cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas Olimpíadas:" << endl;
    cin >> ouro;
    cout << "Digite o número de medalhas de PRATA que o Brasil ganhou nas Olimpíadas:" << endl;
    cin >> prata;
    cout << "Digite o número de medalhas de BRONZE que o Brasil ganhou nas Olimpíadas:" << endl;
    cin >> bronze;
    soma = ouro + prata+ bronze;
    cout << "O Brasil ganhou " << soma << " medalhas nas Olimpíadas.";
    
    return 0;
}

