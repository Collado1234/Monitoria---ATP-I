#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int par = (num % 2 == 0);
    int div3 = (num % 3 == 0);
    int div5 = (num % 5 == 0);

    printf("%d é %s\n", num, par ? "par" : "ímpar");
    if (div3) printf("É divisível por 3.\n");
    if (div5) printf("É divisível por 5.\n");

    switch (1) {
        case 1:
            if (par && div3)
                printf("Número par e múltiplo de 3!\n");
            else if (!par && div5)
                printf("Número ímpar e múltiplo de 5!\n");
            else
                printf("Número analisado com sucesso.\n");
            break;
    }

    return 0;
}