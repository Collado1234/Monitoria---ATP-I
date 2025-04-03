//Verificando se é um número de Armstrong

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){
    int num,copia,somaArms = 0;
    printf("Numero: ");
    scanf("%d", &num);

    num = abs(num);
    int i = 0;
    copia = num;
    while(copia>0){  //conta os digitos;
        copia /= 10;
        i++;
    }
    copia = num;
    while(copia>0){
        int potencia = 1;
        for(int j=0; j<i;j++){
            potencia*= copia%10;
        }
        somaArms += potencia;
        copia/=10;
    }

    if(somaArms == num){
        printf("Sim\n");
    }else{
        printf("Nao\n");
    }
    printf("Soma: %d, num: %d\n", somaArms, num);
    
}