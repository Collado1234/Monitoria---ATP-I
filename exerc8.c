// 8. Converter um número decimal para binário
// Descrição: O aluno deve implementar um programa que recebe um número decimal e o converte para sua representação binária sem usar funções prontas.
// Dica: O método clássico de conversão consiste em dividir o número por 2 e armazenar os restos, que formam o número binário quando lidos de trás para frente.
// Entrada:
// Um número inteiro N.
// Saída:
// O número N convertido para binário.

// Exemplo:
// Entrada:
// 1
// Saída:
// 1101

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int binario[32]; // Vetor para armazenar os restos (máximo de 32 bits para int)
    int i = 0;

    if (n == 0) { 
        printf("Binario: 0\n");
        return 0;
    }

    while (n > 0) {
        binario[i] = n % 2; // Armazena o resto da divisão por 2
        n = n / 2;         // Atualiza o número dividindo por 2
        i++;
    }

    // Imprime o número binário na ordem correta (de trás para frente)
    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
