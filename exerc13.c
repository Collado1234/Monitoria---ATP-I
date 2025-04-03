//COntagem de digitos

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    num = abs(num);
    int i = 0;
    while(num>0){
        num /= 10;
        i++;
    }
    printf("%d",i);
}