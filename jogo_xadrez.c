#include <stdio.h>
#include <string.h>

// Função recursiva para Torre
void moverTorre(int casas, char direcao[], int passo) {
    if (casas == 0) return; // Caso base
    printf("Passo %d: %s\n", passo, direcao);
    moverTorre(casas - 1, direcao, passo + 1); // Chamada recursiva
}

// Função recursiva para Rainha
void moverRainha(int casas, char direcao[], int passo) {
    if (casas == 0) return;
    printf("Passo %d: %s\n", passo, direcao);
    moverRainha(casas - 1, direcao, passo + 1);
}

// Função recursiva + loops aninhados para Bispo
void moverBispo(int casasVertical, int casasHorizontal, char direcaoVertical[], char direcaoHorizontal[]) {
    if (casasVertical == 0 || casasHorizontal == 0) return;

    // Loop externo: movimento vertical
    for (int i = 1; i <= casasVertical; i++) {
        printf("Vertical %d: %s\n", i, direcaoVertical);

        // Loop interno: movimento horizontal
        for (int j = 1; j <= casasHorizontal; j++) {
            printf("   Horizontal %d: %s\n", j, direcaoHorizontal);
        }
    }

    // Chamada recursiva para continuar o movimento
    moverBispo(casasVertical - 1, casasHorizontal - 1, direcaoVertical, direcaoHorizontal);
}

// Função para Cavalo com loops complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    // Duas casas para cima e uma para direita
    for (int i = 1; i <= 2; i++) {
        if (i == 2) {
            printf("Passo %d: Cima\n", i);
            continue; // Pula direto para o próximo passo
        }
        printf("Passo %d: Cima\n", i);
    }

    for (int j = 1; j <= 1; j++) {
        if (j > 1) break; // Condição extra para demonstrar controle de fluxo
        printf("Passo %d: Direita\n", 3);
    }
}

int main() {
    // Valores fixos para número de casas
    int casasTorre = 5;
    int casasBispoVertical = 3;
    int casasBispoHorizontal = 3;
    int casasRainha = 8;

    // Variáveis para escolha do usuário
    char peca[20];
    char direcao[20];

    printf("Qual peça você gostaria de movimentar (Torre, Bispo, Rainha, Cavalo)? ");
    scanf("%s", peca);

    if (strcmp(peca, "Cavalo") != 0) {
        printf("Em qual direção deseja movimentar (Direita, Esquerda, Cima, Baixo)? ");
        scanf("%s", direcao);
    }

    // Lógica para cada peça
    if (strcmp(peca, "Torre") == 0) {
        printf("\nMovimento da Torre:\n");
        moverTorre(casasTorre, direcao, 1);

    } else if (strcmp(peca, "Bispo") == 0) {
        printf("\nMovimento do Bispo:\n");
        moverBispo(casasBispoVertical, casasBispoHorizontal, "Cima", "Direita");

    } else if (strcmp(peca, "Rainha") == 0) {
        printf("\nMovimento da Rainha:\n");
        moverRainha(casasRainha, direcao, 1);

    } else if (strcmp(peca, "Cavalo") == 0) {
        moverCavalo();

    } else {
        printf("\nPeça inválida!\n");
    }

    return 0;
}
