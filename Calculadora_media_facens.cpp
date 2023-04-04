// Biblioteca usada
#include <iostream>
//Biblioteca matematica usada
#include <cmath>
//Biblioteca usada
using namespace std;
//Programa Principal
int main() {
    // Variaveis das notas e media
    double ac1, ac2, af, ag, media;
    //Variavel para o nome
    string nome;
    //Variavel para o RA
    int ra;
    //Variavel para a repetição
    char rept = 's';
    //Condicional para a repetição ocorrer é só clicar o s
    while (rept == 's' || rept == 'S') {
    //Pergunta o nome do usuario
    cout << "Qual o seu nome? ";
    //Leitura do nome da pessoa
    cin >> nome;
    //Pergunta o RA da pessoa
    cout << "Digite seu RA? ";
    //Valor que o ra vai receber
    cin >> ra;
    //Pergunta para o usuario o valor da ac1
    cout << "Digite o valor da ac1: ";
    //O valor que ac1 vai receber
    cin >> ac1;
    //Pergunta para o usuario o valor da ac2
    cout << "Digite o valor da ac2: ";
    //O valor que ac2 vai receber
    cin >> ac2;
    //Pergunta para o usuario o valor da af
    cout << "Digite o valor da af: ";
    //O valor que af vai receber
    cin >> af;
    //Pergunta para o usuario o valor da ag
    cout << "Digite o valor da ag: ";
    //Leitura do valor que a ag vai receber
    cin >> ag;
    //Calculo da ac1
    ac1 = ac1 * 0.15;
    //Calculo da ac2
    ac2 = ac2 * 0.35;
    //Calculo da af
    af = af * 0.4;
    //Calculo da ag
    ag = ag * 0.1;
    //Calculo da media
    media = ac1 + ac2 + af + ag;
    //Mostra para o usuario o valor da media, o nome e o RA dele
    cout << " Você " << nome << " tirou " << media << " Ra: " << ra << endl;
    //Condicional para a media ser maior ou igual a 5
    if (media >= 5) {
        //Mostra se o usuario foi aprovado 
        cout << "Parabens, você foi aprovado" << endl;
    }
    //Se a media for menor que 5 e maior ou igual a 3
    else if (media < 5 && media >= 3) {
        //Mostra que o usuario foi para a substitutiva
        cout << "Quase, faça a substitutiva" << endl;
    }
    //Se a media for menor que 3
    else {
        //Imprime que você foi reprovado
        cout << "Eita, você foi reprovado " << endl;
    }
    //Pergunta se o usuario quer fazer novamente
    cout << "Deseja continuar? s/n ";
    //Leitura para a variavel rept
    cin >> rept;
    }

    return 0;
}