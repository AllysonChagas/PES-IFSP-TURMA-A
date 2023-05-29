/*
 Faça um programa chato
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>
#include <cctype>

using namespace std;

int main(int argc, char** argv) {
    string nome, classificacao;
    char gatos, classificacaoChar, gostarConversa, continuarConversa, finalizarConversa;
    int idade, comida, perguntaSoma, gostar, i=1;

    cout << "Fala meu querido, c ta baum?" << endl;
    ;
    //PERGUNTA 1 E 2;
    cout << "Se tiver ou não, não estou nem ai. Diz ai, não estou fazendo nada mesmo, me conta teu nome e tua idade: ";
    getline(cin, nome);
    cin >> idade;
    if (idade >= 12 && idade <= 30) {
        classificacao = "jovem";
        classificacaoChar = 'J';
    } else if (idade > 40 && idade <= 60) {
        classificacao = "coroa";
        classificacaoChar = 'C';
    } else if (idade > 60) {
        classificacao = "velho";
        classificacaoChar = 'V';
    } else {
        classificacao = "criança";
        classificacaoChar = 'K';
        cout << "Temos uma criança aqui, chama o FBI!!" << endl;
    }

    cout << "Então tá, vejo que você sabe seguir instruções, muito bem!!" << endl;

    //PERGUNTA 3
    cout << "Meu querido " << nome << ", me responda agora uma pergunta. Você gosta de gatos?" << endl;
    cout << "Responda (s) para Sim ou (n) para Não: ";
    cin>> gatos;
    gatos = toupper(gatos);

    while (gatos != 'S') {
        cout << "Vou perguntar de novo, VOCÊ GOSTA DE GATOS??";
        cin>> gatos;
        gatos = toupper(gatos);
    }
    cout << "Ao menos emoção você tem!" << endl;

    //PERGUNTA 4
    cout << "Duvido muito de sua capacidade intelectual, mas vou arriscar lhe fazer outra pergunta agora. Quanto é 1+1?" << endl;
    cin >> perguntaSoma;
    if (perguntaSoma == 2) {
        cout << "Muito bem " << classificacao << " " << nome << ", você é um gênio(a)" << endl;
    } else {
        cout << "ERRADO! Tudo bem, não esperava que você acertasse" << endl;
    }
    cout << "Vamos para mais uma pergunta, ainda tenho esperanças em você." << endl;
    cout << "Responda qual das opções de comida você gosta: " << endl;
    cout << "1 - Chocolate" << endl;
    cout << "2 - Batata Frita" << endl;
    cout << "3 - Jiló" << endl;
    cin >> comida;

    switch (comida) {
        case 1:
            if (classificacaoChar == 'K') {
                cout << "Logo logo você usa uma dentadura de tantas caries!!" << endl;
                break;
            } else if (classificacaoChar == 'J') {
                cout << "Seu obeso(a)" << endl;
                break;
            } else if (classificacaoChar == 'C' || classificacaoChar == 'V') {
                cout << "Tua diabettes deve estar nas alturas!" << endl;
                break;
            }
            break;
        case 2:
            if (classificacaoChar == 'K') {
                cout << "Logo cedo vc deve ter uma barriga grande!" << endl;
                break;
            } else if (classificacaoChar == 'J') {
                cout << "Seu obeso(a)" << endl;
                break;
            } else if (classificacaoChar == 'C' || classificacaoChar == 'V') {
                cout << "Você está vivo(a) ainda?" << endl;
                break;
            }
            break;
        case 3:
            if (classificacaoChar == 'K') {
                cout << "Impossível você gostar disso" << endl;
                break;
            } else if (classificacaoChar == 'J') {
                cout << "Fingindo ser saudável né....suspeito!" << endl;
                break;
            } else if (classificacaoChar == 'C' || classificacaoChar == 'V') {
                cout << "Esperava mais de você!" << endl;
                break;
            }
            break;
        default:
            cout << "Eu realmente tinha esperanças em você!" << endl;
    }

    cout << "Acho que estou gostando de você, creio que não desgosto de pessoas menos intelectuais" << endl;

    //PERGUNTA 5
    cout << "Me responda, quantas vezes você me chamaria de chato?" << endl;
    cin >> gostar;

    for (i >= 1; i <= gostar; i++) {
        cout << "Chato é você!!!" << endl;
    }

    //PERGUNTA 6
    cout << "Você está gostando da nossa conversa? Responda S para Sim ou N para Não" << endl;
    cin >> gostarConversa;
    gostarConversa = toupper(gostarConversa);

    if (gostarConversa == 'S') {
        cout << "Quem bom que pensamos diferente!!" << endl;
    } else if (gostarConversa == 'N') {
        cout << "Sabia que íamos ter algo em comum" << endl;
    } else {
        cout << "Você realmente não sabe responder uma pergunta!!" << endl;
    }

    //PERGUNTA 7
    cout << "Cansei, você quer continuar a nossa conversa? S para sim ou N para não" << endl;
    cin >> continuarConversa;
    continuarConversa = toupper(continuarConversa);

    while (continuarConversa != 'S') {
        cout << "Tem certeza?" << endl;
        cin >> continuarConversa;
        continuarConversa = toupper(continuarConversa);
    }
    //Pergunta 8
    cout << "Que bom, mas acho que quero finalizar, não aguento mais suas burrices!" << endl;
    cout << "Vamos finalizar nossa conversa? S para sim ou N para não" << endl;
    cin >> finalizarConversa;
    finalizarConversa = toupper(finalizarConversa);

    while (finalizarConversa != 'S') {
        cout << "Tem certeza?" << endl;
        cin >> finalizarConversa;
        finalizarConversa = toupper(finalizarConversa);
    }
    cout << "Eba, estou livre de você!!";
    return 0;
}

