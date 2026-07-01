#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentacaoBispo(int numeroCasas) {
    if (numeroCasas > 0) {
        printf("Cima e direita\n");

        movimentacaoBispo(numeroCasas -1);
    }
}


void movimentacaoTorre(int numeroCasas){
    if (numeroCasas > 0) {
        printf("Direita\n");
        movimentacaoTorre (numeroCasas - 1);
    }
}


void movimentacaoRainha(int numeroCasas) {
    if (numeroCasas > 0) {
        printf("Esquerda\n");
        movimentacaoRainha(numeroCasas- 1);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int qtdeCasaTorre = 5, qtdeCasaBispo = 5, qtdeCasaRainha = 8, qtdeCasaCavaloInicial = 2, qtdeCasaCavaloFinal = 1, j = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    movimentacaoBispo(qtdeCasaBispo);

    printf("\nSegundo movimento do Bispo\n");
    for (int i = 1; i < qtdeCasaBispo + 1; i++){
        printf("Cima e ");
        
        while (i > j) {
            printf("Direita\n");
            j++;            
        }
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    movimentacaoTorre(qtdeCasaTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    movimentacaoRainha(qtdeCasaRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo\n");

        for (int i = 0; i < qtdeCasaCavaloFinal; i++) {
            for (int j = 0; j < qtdeCasaCavaloInicial; j++) {
                printf("Cima\n");
            }
            printf("Direita\n");
        }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
