#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    int navioH_lin = 2;
    int navioH_col = 4;

    int navioV_lin = 5;
    int navioV_col = 7;

    int cabeH = (navioH_col + TAM_NAVIO <= TAM_TABULEIRO);
    int cabeV = (navioV_lin + TAM_NAVIO <= TAM_TABULEIRO);

    if (!cabeH) {
        printf("Erro: navio horizontal nao cabe no tabuleiro.\n");
        return 1;
    }
    if (!cabeV) {
        printf("Erro: navio vertical nao cabe no tabuleiro.\n");
        return 1;
    }

    int temSobreposicao = 0;
    for (int i = 0; i < TAM_NAVIO; i++) {
        if ((navioH_lin == navioV_lin + i) && (navioH_col + i == navioV_col)) {
            temSobreposicao = 1;
            break;
        }
    }

    if (temSobreposicao) {
        printf("Erro: navios se sobrepoem.\n");
        return 1;
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[navioH_lin][navioH_col + i] = 3;
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[navioV_lin + i][navioV_col] = 3;
    }

    printf("Tabuleiro com navios posicionados:\n");
    for (int l = 0; l < TAM_TABULEIRO; l++) {
        for (int c = 0; c < TAM_TABULEIRO; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }

    return 0;
}