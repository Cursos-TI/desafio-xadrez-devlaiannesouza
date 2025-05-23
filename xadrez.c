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
        i++;
    }

    // Movimento da Rainha : 8 casas a Esquerda (usando do-while)
    // A variavel i já foi utilizada no loop for e while, reutilizar estava dando erro. 
    //então irei utilizar a variavel j.

    int casasRainha = 8;
    int j = 0;
    printf ("\nMovimento da Rainha: \n");
    do {
        printf ("Esquerda \n");
        j++;
    }while (j <casasRainha);

    return 0;
}
