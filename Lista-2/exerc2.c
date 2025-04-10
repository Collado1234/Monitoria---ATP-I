// 2. Calcular o Maior Divisor Comum (MDC) de dois números
// Objetivo: Implementar a versão iterativa do algoritmo para calcular o Máximo Divisor Comum.
// Entrada:
// Dois inteiros A e B.


// Saída:
// O MDC de A e B.


// Exemplo:
// Entrada:
// 36 48
// Saída:
// 12


#include<stdio.h>

// Algoritmo de Euclides é uma resposta eficiente para calcular o MDC
int main(){
    int num_scan1, num_scan2, quociente, divisor, MDC;
    printf("Digite primeiro numero: ");
    scanf("%d", &num_scan1);

    printf("Digite segundo numero: ");
    scanf("%d", &num_scan2);

    if(num_scan1 == 0 && num_scan2 == 0){   //Verificando possibilidade de erro
        printf("MDC indefinido para (0,0)\n");
        return -1;
    }
    quociente = num_scan1;   //Apenas facilitando legibilidade
    divisor = num_scan2;
    while(divisor != 0){   
        int temp = divisor;
        divisor = quociente%divisor;
        quociente = temp;
    }

    MDC = quociente; //Facilitando legibilidade

    printf("MDC(%d,%d): %d\n",num_scan1,num_scan2,MDC);
    return 0;
}