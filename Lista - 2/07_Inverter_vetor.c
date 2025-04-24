#include <stdio.h>

int main() {
    int N;

    // Lê o tamanho do vetor
    scanf("%d", &N);

    int vetor[N];

    // Lê os elementos do vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inverte o vetor de fato (troca os elementos)
    for (int i = 0; i < N / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[N - 1 - i];
        vetor[N - 1 - i] = temp;
    }

    // Imprime o vetor já invertido
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
