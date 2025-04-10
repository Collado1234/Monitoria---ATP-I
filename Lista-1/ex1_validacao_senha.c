#include <stdio.h>

#define SENHA 1234

int main() {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != SENHA) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    return 0;
}