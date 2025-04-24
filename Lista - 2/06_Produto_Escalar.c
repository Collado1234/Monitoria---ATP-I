#include <stdio.h>

int main() {
    int N;

    // Lê o tamanho dos vetores
    scanf("%d", &N);

    int A[N], B[N];
    int produtoEscalar = 0;

    // Lê os elementos do vetor A
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Lê os elementos do vetor B
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // Calcula o produto escalar: soma de A[i] * B[i]
    for (int i = 0; i < N; i++) {
        produtoEscalar += A[i] * B[i];
    }

    // Imprime o produto escalar
    printf("%d\n", produtoEscalar);

    return 0;
}
