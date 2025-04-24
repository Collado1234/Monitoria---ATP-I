#include <stdio.h>

int main() {
    int N;

    // Lê o tamanho dos vetores
    scanf("%d", &N);

    int A[N], B[N], C[N]; // Vetores A, B e o resultado C

    // Lê os elementos do vetor A
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Lê os elementos do vetor B
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // Soma os elementos de A e B e armazena em C
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    // Imprime o vetor resultante
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}
