/*Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de
quilômetros que ela andou de bicicleta e o tempo gasto em minutos para percorrer essa
distância. Mostre na tela uma mensagem como: “Olá Mário, você percorreu 30 km 
 * em 65 minutos, sua velocidade média foi: 27.7.*/

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
    char nome[20];
    float quilometros, minutos, velocidadeMedia, minutosParaHora;

    cout << "Informe seu nome: ";
    cin >> nome;
    cout << "Informe a quantidade de quilômetros percorridos de bicicleta: ";
    cin >> quilometros;
    cout << "Informe o tempo gasto em minutos para percorrer a distância informada: ";
    cin >> minutos;


    minutosParaHora = minutos / 60;

    velocidadeMedia = quilometros / minutosParaHora;

    cout << "Olá " << nome << ", você percorreu " << quilometros << " km em " << minutos << " minutos, sua "
            << "velocidade média foi: " << setprecision(2) << velocidadeMedia << " K/h";
    return 0;
}
