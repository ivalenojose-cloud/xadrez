#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do Cavalo (2 para baixo, 1 para esquerda)
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    // Torre: usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: usando WHILE
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

    // Rainha: usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    // Cavalo: usando loops aninhados
    printf("\nMovimento do Cavalo:\n");

    // Primeiro loop FOR para as duas casas para baixo
    for (int i = 1; i <= casasBaixoCavalo; i++) {
        printf("Baixo\n");
    }

    // Loop WHILE aninhado para a casa à esquerda
    int l = 1;
    while (l <= casasEsquerdaCavalo) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
