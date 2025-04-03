// Descrição: Implemente um programa que recebe dois números inteiros e calcula o MMC deles, utilizando a relação:
// MMC(a,b)=∣a×b∣MDC(a,b)MMC(a, b) = \frac{|a \times b|}{MDC(a, b)}MMC(a,b)=MDC(a,b)∣a×b∣​
// Entrada: Dois inteiros positivos.
//  Saída: O valor do MMC.
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, mdc, mmc, temp_a, temp_b;

    // Entrada dos números
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);

    temp_a = a;
    temp_b = b;

    // Algoritmo de Euclides para calcular o MDC
    while (temp_b != 0) {
        int resto = temp_a % temp_b;
        temp_a = temp_b;
        temp_b = resto;
    }
    mdc = temp_a;

    // Cálculo do MMC usando a fórmula MMC(a, b) = (a * b) / MDC(a, b)
    mmc = abs(a * b) / mdc;  // Forma otimizada para evitar overflow

    // Saída do resultado
    printf("MMC: %d\n", mmc);

    return 0;
}
