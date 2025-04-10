#include <stdio.h>

int main() {
    int chute, secreto = 42, quantidade_tentativas = 1;

    printf("Tente adivinhar o número secreto entre 1 e 100: ");
    scanf("%d", &chute);

    while (chute != secreto) {
        if (chute < secreto)
            printf("Muito baixo! Tente novamente: ");
        else
            printf("Muito alto! Tente novamente: ");
        scanf("%d", &chute);
        quantidade_tentativas++;
    }

    printf("Parabéns! Você acertou.\n");

    return 0;
}