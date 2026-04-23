#include <stdio.h>

int main() {
    // Variáveis para número de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    // Variáveis para escolha do usuário
    char peca[20];
    char direcao[20];

    // Pergunta ao usuário
    printf("Qual peça você gostaria de movimentar (Torre, Bispo, Rainha, Cavalo)? ");
    scanf("%s", peca);

    printf("Em qual direção deseja movimentar (Direita, Esquerda, Cima, Baixo)? ");
    scanf("%s", direcao);

    // Lógica para cada peça
    if (strcmp(peca, "Torre") == 0) {
        printf("\nMovimento da Torre:\n");
        for (int i = 1; i <= casasTorre; i++) {
            printf("%s\n", direcao);
        }
    } else if (strcmp(peca, "Bispo") == 0) {
        printf("\nMovimento do Bispo:\n");
        int j = 1;
        while (j <= casasBispo) {
            printf("%s\n", direcao);
            j++;
        }
    } else if (strcmp(peca, "Rainha") == 0) {
        printf("\nMovimento da Rainha:\n");
        int k = 1;
        do {
            printf("%s\n", direcao);
            k++;
        } while (k <= casasRainha);
    } else if (strcmp(peca, "Cavalo") == 0) {
        printf("\nMovimento do Cavalo:\n");
        // Dois movimentos para baixo
        for (int i = 1; i <= casasBaixoCavalo; i++) {
            printf("Baixo\n");
        }
        // Um movimento para esquerda
        int l = 1;
        while (l <= casasEsquerdaCavalo) {
            printf("Esquerda\n");
            l++;
        }
    } else {
        printf("\nPeça inválida!\n");
    }

    return 0;
}
