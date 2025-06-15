// Aluna: Aline Teixeira Ramos

#include <stdio.h>

int main() {

    // TORRE -> 5 casas p. direita
    int movimentosTorre = 5;

    printf("Passos da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Andei para a direita\n");
    }
    printf("\n");

    // BISPO -> 5 casas na diagonal, sendo para cima + direita
    int movimentosBispo = 5;
    int contadorBispo = 0;

    printf("Passos do Bispo:\n");
    while (contadorBispo < movimentosBispo) {
        printf("Andei para a diagonal\n");
        contadorBispo++;
    }
    printf("\n");

    // RAINHA ->  8 casas para a esquerda
    int movimentosRainha = 8;
    int contadorRainha = 0;

    printf("Passos da Rainha:\n");
    do {
        printf("Andei para a esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}