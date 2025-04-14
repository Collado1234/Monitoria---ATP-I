// 9. Quebra de número inteiro em dígitos
// Enunciado:
//  Receba um número inteiro de 3 dígitos e imprima separadamente cada um dos dígitos (centena, dezena, unidade).
// Exemplo de entrada: 385
//  Saída esperada:
// Centena: 3  
// Dezena: 8  
// Unidade: 5

#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);

    // Verifica se o número tem 3 dígitos
    if (numero < 100 || numero > 999) {
        printf("Número inválido. Por favor, digite um número de 3 dígitos.\n");
        return 1;
    }

    // Calcula cada dígito
    centena = numero / 100; // Obtém a centena
    dezena = (numero / 10) % 10; // Obtém a dezena
    unidade = numero % 10; // Obtém a unidade

    // Imprime os resultados
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}    