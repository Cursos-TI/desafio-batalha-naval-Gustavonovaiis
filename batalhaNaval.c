#include <stdio.h>

#define TAMANHO_TABULEIRO 10 // Tamanho fixo do tabuleiro (10x10)
#define TAMANHO_NAVIO 3      // Tamanho fixo dos navios (3 posições)

int main() {
    // 1. Representação do Tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0}; // Inicializa o tabuleiro com água (0)

    // 2. Posicionamento dos Navios
    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaNavio1 = 2, colunaNavio1 = 3; // Navio 1: Horizontal
    int linhaNavio2 = 5, colunaNavio2 = 6; // Navio 2: Vertical

    // Validação das coordenadas e posicionamento dos navios
    // Navio 1: Horizontal
    if (colunaNavio1 + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) { // Verifica se cabe horizontalmente
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = 3; // Marca as posições do navio com 3
        }
    } else {
        printf("Erro: Navio 1 não cabe no tabuleiro.\n");
        return 1; // Encerra o programa com erro
    }

    // Navio 2: Vertical
    if (linhaNavio2 + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) { // Verifica se cabe verticalmente
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaNavio2 + i][colunaNavio2] = 3; // Marca as posições do navio com 3
        }
    } else {
        printf("Erro: Navio 2 não cabe no tabuleiro.\n");
        return 1; // Encerra o programa com erro
    }

    // Validação de Sobreposição (simplificada)
    // Neste caso, garantimos manualmente que os navios não se sobrepõem ao definir suas coordenadas.

    // 3. Exibição do Tabuleiro
    printf("\n=== Tabuleiro do Batalha Naval ===\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada posição do tabuleiro
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }

    return 0;
}