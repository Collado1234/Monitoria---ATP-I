//Verificação de Número Perfeito

// Descrição: Um número é perfeito se for igual à soma de seus divisores próprios. Implemente um programa que verifique se um número é perfeito.
// Entrada: Um número inteiro positivo.
//  Saída: "Sim" se for perfeito, "Não" caso contrário.

#include<stdio.h>

int main(){
    int num, soma=0;
    printf("Numero: ");
    scanf("%d", &num);
    
    for (int i = 1; i <=  num/2; i++){
        if(num%i==0){
            soma += i;
        }
    }
    
    if(soma == num){
        printf("Sim\n");
    }else{
        printf("Não\n");
    }
}