// 13. Contagem de Dígitos
// Objetivo: Contar quantos dígitos tem um número.
// Entrada:
// Um inteiro.


// Saída:
// A quantidade de dígitos.
// Exemplo: 514 → 3

#include <stdio.h>
#include <stdlib.h> // Para usar abs()

int main(){
    int numero, copia_numero, contagem = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    copia_numero = abs(numero); // Armazena o módulo do número original para poder exibir depois e não ter problema com numero negativo

    while(copia_numero > 0) {
        contagem++; // Incrementa a contagem
        copia_numero /= 10; // Remove o dígito atual do número
    }

    printf("O numero %d tem %d digitos.\n", numero, contagem); // Exibe o resultado

    return 0;
}