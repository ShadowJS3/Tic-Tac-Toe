#include <stdio.h>

#define JOGADOR_X 'X'
#define JOGADOR_O 'O'

#define QNTD_LINHAS 3
#define QNTD_COLUNAS 3

int main(int argc, char const *argv[]) {
    int linha;
    int coluna;
    
    int posicao;
    /*
             [0] [1] [2]
        [0]   1   2   3
        [1]   4   5   6   X
        [2]   7   8   9   O
    */

    char tabuleiro[3][3];

    for (linha = 0; linha < QNTD_LINHAS; linha += 1)
        for (coluna = 0; linha < QNTD_COLUNAS; linha += 1)
            tabuleiro[linha][coluna] = '_';

    printf("Jogador %c sua vez\n", JOGADOR_X);
    scanf("%d", &posicao);

    if (posicao == 1)
        tabuleiro[0][0] = JOGADOR_X;
    else if (posicao == 2)
        tabuleiro[0][1] = JOGADOR_X;
    else if (posicao == 3)
        tabuleiro[0][2] = JOGADOR_X;
    else if (posicao == 4)
        tabuleiro[1][0] = JOGADOR_X;
    else if (posicao == 5)
        tabuleiro[1][1] = JOGADOR_X;
    else if (posicao == 6)
        tabuleiro[1][2] = JOGADOR_X;
    else if (posicao == 7)
        tabuleiro[2][0] = JOGADOR_X;
    else if (posicao == 8)
        tabuleiro[2][1] = JOGADOR_X;
    else if (posicao == 9)
        tabuleiro[2][2] = JOGADOR_X;

    for (linha = 0; linha < QNTD_LINHAS; linha += 1) {
        for (coluna = 0; coluna < QNTD_COLUNAS; coluna += 1)
            printf("%c", tabuleiro[linha][coluna]);
        printf("\n");
    }
}