//Verificando se um numero é Palindromo

#include <stdio.h>
/*
   Uma forma eficiente é inverter um número e comparar se é igual ao original;
*/
int main() {
    int num, original, invertido = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    original = num; //cópia

    while (num > 0) {
        invertido = invertido * 10 + (num % 10); 
        num /= 10; 
    }

    if (original == invertido) {
        printf("Sim\n");
    } else {
        printf("Não\n");
    }

    return 0;
}
