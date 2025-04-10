#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    do {
        printf("\nMenu de Operações:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                resultado = a + b;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                resultado = a - b;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                resultado = a * b;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    printf("Resultado: %.2f\n", a / b);
                else
                    printf("Erro: divisão por zero!\n");
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}