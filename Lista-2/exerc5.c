// 5. Gerar a Sequência de Collatz
// Descrição: A sequência de Collatz é definida da seguinte forma:
// Comece com um número N.
// Se N for par, divida por 2.
// Se N for ímpar, multiplique por 3 e adicione 1.
// Repita o processo até chegar em 1.

// Entrada:
// Um número inteiro N.
// Saída:
// A sequência gerada até chegar a 1.

// Entrada:
// 6

// Saída:
// 6 3 10 5 16 8 4 2 1

#include<stdio.h>

int main (){
    int n;
    
    printf("Numero para iniciar a sequencia: ");
    scanf("%d", &n);

    if(n<1){
        printf("Numero invalido para a sequencia, tente um numero inteiro positivo\n");
        return -1;
    }

    printf("Sequência de Collatz (%d): %d ", n,n);
    do{
        if(n%2){
            n = 3*n + 1;
        }else{
            n = n/2;
        }
        printf("%d ", n);
    }while(n!=1);

    return 0;
}