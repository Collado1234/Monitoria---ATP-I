// 3. Calcular Média, Mediana, Moda e Desvio Padrão
// Descrição: O aluno deve escrever um programa que recebe um conjunto de números inteiros e calcula os principais parâmetros estatísticos.
// Entrada:
// Um número inteiro N (tamanho do vetor).

// N números inteiros.

// Saída:
// A média, a mediana, a moda (admita a possibilidade de ser bimodal) e o desvio padrão dos números.

// Exemplo:
// Entrada:
// 5
// 1 2 2 3 4

// Saída:
// Média: 2.4
// Mediana: 2
// Moda: 2
// Desvio Padrão: 1.02

#include<stdio.h>
#include<limits.h>
/*
    Neste exercicio vou separar cada função em loopings separados, para facilitar a visualização e entendimento

    Para calcularmos a mediana e moda de forma mais fácil é interessante ordernarmos os dados
*/
int main (){
    int tam_vetor;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam_vetor);
    float vetor[tam_vetor];

    for(int i=0;i<tam_vetor; i++){
        printf("Digite numero da posicao [%d]: ",i);
        scanf("%f", &vetor[i]);
    }

    //Média: Somatório dos elementos dividido pela quantidade de elementos.
    float media=0.0;
    for(int i=0; i<tam_vetor;i++){
        media+= vetor[i];
    }
    media = media/tam_vetor;
    printf("Media: %.2f\n", media);

    //Ordenando o vetor
    float auxTroca;
    int flagTroca;
    for(int i=0; i<tam_vetor-1;i++){
        flagTroca = 0;
        for(int j = 0; j < tam_vetor-1; j++){
            if(vetor[j] > vetor[j+1]){
                auxTroca = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxTroca;
                flagTroca = 1;
            }
        }
        if(flagTroca == 0) break;
    }

    //Calculando a mediana
    float mediana;
    if(tam_vetor%2){
        mediana = vetor[tam_vetor/2];
    }else{
        mediana = (vetor[tam_vetor/2] + vetor[tam_vetor/2 -1])/2;
    }
    printf("Mediana: %.2f\n", mediana);

    //calculando a Moda
    float moda1 = vetor[0], moda2 = INT_MIN;  
    int max_Count = 0, count;

    for(int i = 0; i < tam_vetor; i++){
        count = 0;
        for(int j = 0; j < tam_vetor; j++){
            if(vetor[j]==vetor[i]){
                count++;
            }
        }
        if(count > max_Count){
            max_Count = count;
            moda1 = vetor[i];
            moda2 = INT_MIN;
        }else if(count == max_Count && vetor[i] != moda1) {
            // Se encontrar outro número com a mesma frequência, ele se torna moda2
            moda2 = vetor[i];
        }
    }
    printf("Moda(s): ");
    printf("%.2f", moda1);
    if (moda2 != INT_MIN) {
        printf(" e %.2f", moda2);
    }
    printf("\n");


return 0;
}