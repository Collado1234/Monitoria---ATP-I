// 10. Conversão de temperatura
// Enunciado:
//  Receba uma temperatura em graus Celsius e converta para Fahrenheit e Kelvin.
//  Fórmula: F = C * 1.8 + 32
// Fórmula: K = C + 273.15

// Exemplo de entrada: Temperatura em °C: 30
// Saída esperada: Temperatura em °F: 86 
//   Temperatura em Kelvin: 303.15

#include<stdio.h>

int main (){
    float celsius, fahrenheit, Kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Conversão de Celsius para Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    Kelvin = celsius + 273.15; // Conversão para Kelvin

    printf("Temperatura em Celsius: %.2f\n", celsius);
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperatura em Kelvin: %.2f\n", Kelvin); 
    
    return 0;
}