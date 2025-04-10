// Descrição: Escreva um programa que recebe um número inteiro e calcula a soma de seus dígitos.
// Entrada: Um número inteiro positivo.
//  Saída: A soma dos dígitos.

#include<stdio.h>

int main(){
    int num, soma=0;
    printf("Numero: ");
    scanf("%d", &num);

    while(num>0){
        soma+= num%10; 
        num /= 10;
    }

    printf("Soma dos digitos: %d", soma);
    return 0;
}