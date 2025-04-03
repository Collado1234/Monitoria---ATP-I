//Invertendo um numero
#include<stdio.h>
#include<stdlib.h>

int main (){
    int num, num_invertido=0;
    printf("Numero: ");
    scanf("%d", &num);

    while(num>0){
        printf("Num Invertido: %d\n",num_invertido);
        printf("Num: %d\n",num);
        num_invertido = num_invertido * 10 + (num%10);
        num /= 10;
    }
    printf("%d", num_invertido);
}