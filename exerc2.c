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
    int num_scan1, num_scan2,quociente,zero_flag=0, divisor,MDC, resto_de_divisao;
    printf("Digite primeiro numero: ");
    scanf("%d", &num_scan1);

    printf("Digite segundo numero: ");
    scanf("%d", &num_scan2);

    if(num_scan1 == 0 && num_scan2 == 0){
        printf("MDC indefinido para (0,0)\n");
        return -1;
    }else if(num_scan1 == 0){
        MDC = num_scan2;
        zero_flag = 1;
    }else if(num_scan2 == 0){
        MDC = num_scan1;
        zero_flag = 1;
    }
    
    if(zero_flag == 0){
        if(num_scan1 > num_scan2){
            quociente = num_scan1;
            divisor = num_scan2;            
        }else{
            quociente = num_scan2;
            divisor = num_scan1;
        }

        resto_de_divisao = quociente%divisor;
        while(resto_de_divisao != 0){
            quociente = divisor;
            divisor = resto_de_divisao;

            resto_de_divisao = quociente%divisor;
        }
        MDC = divisor;
    }
    printf("MDC(%d,%d): %d\n",num_scan1,num_scan2,MDC);
    return 0;
}