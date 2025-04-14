// 15. Verificação de Palíndromo Numérico
// Objetivo: Verificar se o número lido é um palíndromo.
// Entrada:
// Um inteiro positivo.


// Saída:
// "Sim" ou "Não".
// Exemplo: 
// 14541 →  “Sim.    
// 12469 → “Não”

#include <stdio.h>
#include <stdlib.h> // Para abs()

int main() {
    int numero, copia_numero, reverso = 0, digito_atual;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Garante que estamos lidando com um número positivo
    copia_numero = abs(numero);

    int temp = copia_numero; // Guarda uma cópia para comparar depois

    while (temp > 0) {
        digito_atual = temp % 10;             // Pega o último dígito
        reverso = reverso * 10 + digito_atual; // Adiciona no reverso
        temp /= 10;                            // Remove o último dígito
    }

    if (reverso == copia_numero) {
        printf("Sim\n");
    } else {
        printf("Não\n");
    }

    return 0;
}
