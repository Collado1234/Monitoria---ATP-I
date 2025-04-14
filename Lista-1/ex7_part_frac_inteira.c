// 7. Parte inteira e fracionária
// Enunciado:
//  Peça ao usuário para digitar um número decimal (float) e mostre separadamente sua parte inteira e sua parte fracionária.
// Exemplo de entrada: 3.75
// Saída esperada:
// Parte inteira: 3  
// Parte fracionária: 0.75
 
#include <stdio.h>
#include <math.h>

int main(){
    int parte_inteira;
    float parte_fracionaria, numero_decimal;

    printf("Digite um número decimal: ");
    scanf("%f", &numero_decimal);

    parte_inteira = (int)numero_decimal; // Cast para inteiro
    parte_fracionaria = numero_decimal - parte_inteira; // Subtração para obter a parte fracionária

    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %.2f\n", parte_fracionaria); // Formatação para duas casas decimais

    //Outra forma

    parte_inteira = floor(numero_decimal); // Arredonda para baixo, PARA NÚMEROS NEGATIVOS	não funciona, precisa usar trunc, ou casting
    parte_fracionaria = numero_decimal - parte_inteira;
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %.2f\n", parte_fracionaria); 

    // Outra forma
    parte_inteira = numero_decimal;     // Casting Implícito
    parte_fracionaria = numero_decimal - parte_inteira; 
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %.2f\n", parte_fracionaria); // Formatação para duas casas decimais

    return 0;
}