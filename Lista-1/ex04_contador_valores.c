#include <stdio.h>

int main() {
    int num;
    int positivos = 0, negativos = 0, zeros = 0;

    printf("Digite números inteiros (digite -999 para sair):\n");

    do {
        scanf("%d", &num);

        if (num == -999) break;

        if (num > 0)
            positivos++;
        else if (num < 0)
            negativos++;
        else
            zeros++;

    } while (1);

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}