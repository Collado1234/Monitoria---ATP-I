// 1. Centralizar um vetor na média
// Descrição: O aluno deve implementar um programa que lê um vetor de números inteiros e centraliza seus valores em relação à média. Para isso, cada elemento do vetor deve ser substituído pela sua diferença em relação à média.
// Entrada:
// Um número inteiro N (tamanho do vetor).
// N números inteiros representando os elementos do vetor.
// Saída:
// O vetor resultante após a centralização.

/* Exemplo:
CopiarEditar
Entrada:
5
1 2 3 4 5
Saída:
 -2 -1 0 1 2
*/

#include <stdio.h>

#define MAX 100  // Define um tamanho máximo para o vetor

int main() {
    int tam_vetor, i;
    float media = 0.0;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam_vetor);

    if (tam_vetor <= 0 || tam_vetor > MAX) {
        printf("Tamanho inválido!\n");
        return 1;
    }

    float vetor[MAX];  // Usa um tamanho fixo seguro

    for (i = 0; i < tam_vetor; i++) {
        printf("Elemento do índice [%d]: ", i);
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media /= tam_vetor;  // Calcula a média

    printf("\nVetor centralizado na média:\n");
    for (i = 0; i < tam_vetor; i++) {
        vetor[i] -= media;
        printf("Índice %d: %.2f\n", i, vetor[i]);
    }

    return 0;
}
