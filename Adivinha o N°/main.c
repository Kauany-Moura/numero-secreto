#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("*****************************************\n");
    printf("*Bem Vindo ao Nosso Jogo de Adivinhação!*\n");
    printf("*****************************************\n");

    int segundos = time(0);
    srand (segundos);

    int numero_grande = rand();

    int numero_secreto = numero_grande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("1 - Fácil\n");
    printf("2 - Médio\n");
    printf("3 - Difícil\n");
    printf("Escolha o nível: ");
    scanf("%d", &nivel);

    int numero_de_tentativas;
    switch (nivel) {
        case 1:
            numero_de_tentativas = 20;
            break;
        case 2:
            numero_de_tentativas = 15;
            break;
        default:
            numero_de_tentativas = 6;
            break;
    }

    for(int i = 1; i <= numero_de_tentativas; i++){

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;

        if(acertou){
            break;
        }

        else if(maior){
            printf("Seu chute foi maior que o número secreto.\n");
        } else {
            printf("Seu chute foi menor que o número secreto.\n");
        }

        double pontos_perdidos = abs(chute - numero_secreto) / 2.0;
        pontos = pontos - pontos_perdidos;

        tentativas++;
    }

    printf("Fim de jogo!\n");

    if (acertou){
        printf("Você acertou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Você perdeu! Tente novamente!\n");
    }

    return 0;
}