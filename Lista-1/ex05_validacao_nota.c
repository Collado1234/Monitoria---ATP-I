#include <stdio.h>

int main() {
    float nota;

    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota inválida. Tente novamente: ");
        scanf("%f", &nota);
    }

    printf("Nota válida: %.2f\n", nota);

    return 0;
}