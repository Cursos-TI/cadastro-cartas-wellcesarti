#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    int resultado1 = 0, resultado2 = 0;
    int soma1, soma2;

    // Gerar números aleatórios
    srand(time(0));

    ataque1 = rand() % 100 + 1;
    defesa1 = rand() % 100 + 1;
    recuo1 = rand() % 100 + 1;

    ataque2 = rand() % 100 + 1;
    defesa2 = rand() % 100 + 1;
    recuo2 = rand() % 100 + 1;

    // Início do jogo
    printf("Bem-vindo ao jogo Super Trunfo!\n\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");
    printf("Escolha a comparacao: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case 'A':
        case 'a':
            printf("\nVoce escolheu o atributo Ataque!\n");
            resultado1 = (ataque1 > ataque2) ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("\nVoce escolheu o atributo Defesa!\n");
            resultado1 = (defesa1 > defesa2) ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("\nVoce escolheu o atributo Recuo!\n");
            resultado1 = (recuo1 < recuo2) ? 1 : 0; // Menor vence
            break;
        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    if (primeiroAtributo == 'A' || primeiroAtributo == 'a') {
        printf("D. Defesa\n");
        printf("R. Recuo\n");
    } else if (primeiroAtributo == 'D' || primeiroAtributo == 'd') {
        printf("A. Ataque\n");
        printf("R. Recuo\n");
    } else {
        printf("A. Ataque\n");
        printf("D. Defesa\n");
    }

    printf("Escolha a comparacao: ");
    scanf(" %c", &segundoAtributo);

    // Impedir repetição do mesmo atributo
    if (primeiroAtributo == segundoAtributo ||
        primeiroAtributo == segundoAtributo + 32 ||
        primeiroAtributo + 32 == segundoAtributo) {
        printf("\nVoce escolheu o mesmo atributo! Encerrando o jogo.\n");
        return 0;
    }

    switch (segundoAtributo) {
        case 'A':
        case 'a':
            printf("\nVoce escolheu o atributo Ataque!\n");
            resultado2 = (ataque1 > ataque2) ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("\nVoce escolheu o atributo Defesa!\n");
            resultado2 = (defesa1 > defesa2) ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("\nVoce escolheu o atributo Recuo!\n");
            resultado2 = (recuo1 < recuo2) ? 1 : 0;
            break;
        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }

    // Soma dos atributos
    soma1 = ataque1 + defesa1 + recuo1;
    soma2 = ataque2 + defesa2 + recuo2;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("Carta 1 -> Ataque: %d | Defesa: %d | Recuo: %d | Soma: %d\n", ataque1, defesa1, recuo1, soma1);
    printf("Carta 2 -> Ataque: %d | Defesa: %d | Recuo: %d | Soma: %d\n", ataque2, defesa2, recuo2, soma2);

    if (soma1 > soma2) {
        printf("\nCarta 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("\nCarta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}