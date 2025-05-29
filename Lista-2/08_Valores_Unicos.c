#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;

    // Lê o tamanho do vetor
    scanf("%d", &N);

    int vetor[N];

    // Lê os elementos do vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    qsort(vetor,N, sizeof(int),compara);

    for(int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }
    // Para cada elemento, verifica se ele aparece exatamente uma vez
    for (int i = 0; i < N; i++) {
        int contador = 0;

        // Compara com todos os outros elementos
        for (int j = 0; j < N; j++) {
            if (vetor[i] == vetor[j]) {
                contador++;
            }
        }

        // Se apareceu só uma vez, imprime
        if (contador == 1) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");
    return 0;
}
