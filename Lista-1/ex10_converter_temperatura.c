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