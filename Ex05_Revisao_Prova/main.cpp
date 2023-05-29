/*
5) Faça um programa que receba uma senha formada de quatro números inteiros, verifique se a
senha está correta e, caso não esteja, solicite novamente a senha (a senha pode ser solicitada apenas 3
vezes). Se a senha entrada for a correta, deverá ser apresentada a mensagem “Senha Correta”, caso
contrário, “Senha Incorreta”. (0.5 pontos)
Observações:
a. O usuário deverá informar uma senha.
b. O sistema deve verificar se a senha é válida.
c. A senha válida é 1234.
 */

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    int senha, cont = 1;

    while (cont <= 3) {
        cout << "Digite sua senha: ";
        cin >> senha;
        if (senha == 1234) {
            cout << "Senha Correta.";
            break;
            cont = 3;
        } else {
            cout << "Senha Incorreta." << endl;
            cont += 1;
        }
    }

        return 0;
}