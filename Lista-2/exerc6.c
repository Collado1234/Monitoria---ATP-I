// 6. Implementar um Algoritmo para dizer todos os primos menores que N
// Descrição: O aluno deve implementar um algoritmo eficiente para encontrar todos os números primos menores que um valor N 
// Entrada:
// Um número inteiro N.
// Saída:
// Todos os números primos menores que N.

// Exemplo:
// Entrada:
// 10
// Saída:
// 2 3 5 7

#include<stdio.h>

//Aplicando o Crivo de Erastótenes
int main (){
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    int vetor_eh_primo[n];
    
    for(int i = 0; i < n; i++){
        vetor_eh_primo[i] = -1;
    }

    for(int i = 2; i < n; i++){
        if(vetor_eh_primo[i] == -1){
            vetor_eh_primo[i] = 1;

            for(int j = 2*i; j < n; j+=i){
                vetor_eh_primo[j] = 0;
            }
        }
    }
    printf("Numeros primos menores que %d: ",n);
    for(int i = 2; i < n; i++){
        if(vetor_eh_primo[i]){
            printf("%d ", i);
        }
    }
}