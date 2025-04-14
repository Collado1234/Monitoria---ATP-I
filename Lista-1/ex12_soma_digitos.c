// 12. Soma de Dígitos
// Objetivo: Somar todos os dígitos de um número.
// Entrada:
// Um inteiro positivo.


// Saída:
// A soma dos dígitos.
// Exemplo: 5146 →  5+1+4+6 = 16

#include<stdio.h>
#include <stdlib.h> // Para usar abs()


int main (){
    int numero,copia_numero ,soma = 0, digito_atual;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Número inválido. Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    copia_numero = abs(numero); // Armazena o módulo do número original para poder exibir depois e não ter problema com numero negativo

    // Enquanto o número for maior que 0, continue somando os dígitos
    while (copia_numero > 0){
        digito_atual = copia_numero%10;
        soma += digito_atual; // Adiciona o dígito atual à soma
        copia_numero /= 10; // Remove o dígito atual do número
    }

    printf("A soma dos dígitos de %d é: %d\n", numero, soma); // Exibe o resultado
    return 0;
    
}