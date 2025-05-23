#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Movimento da Torre : 5 casas para direita
    int casasTorre = 5;
    printf ("Movimento da Torre:\n ");
    for ( int i = 0; i < casasTorre; i++){
        printf ("Direita\n");
    }

    //Movimento do Bispo : 5 casas na diagonal (cima, direita) usando while
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo){
        printf("Cima Direita\n");
    }

    // 

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
