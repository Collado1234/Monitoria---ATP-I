// 2. Implementar o Algoritmo de Euclides para calcular o MDC
// Descrição: O aluno deve implementar a versão iterativa do Algoritmo de Euclides para encontrar o Máximo Divisor Comum (MDC) entre dois números.
// Entrada:
// Dois números inteiros A e B.


// Saída:
// O MDC entre A e B.


// Exemplo:
// makefile
// CopiarEditar
// Entrada:
// 36 48

// Saída:
// 12

#include<stdio.h>

int main(){
    int num_scan1, num_scan2, quociente, divisor, MDC;
    printf("Digite primeiro numero: ");
    scanf("%d", &num_scan1);

    printf("Digite segundo numero: ");
    scanf("%d", &num_scan2);

    if(num_scan1 == 0 && num_scan2 == 0){
        printf("MDC indefinido para (0,0)\n");
        return -1;
    }
    quociente = num_scan1;
    divisor = num_scan2;
    while(divisor != 0){
        int temp = divisor;
        divisor = quociente%divisor;
        quociente = temp;
    }

    MDC = quociente;

    printf("MDC(%d,%d): %d\n",num_scan1,num_scan2,MDC);
    return 0;
}