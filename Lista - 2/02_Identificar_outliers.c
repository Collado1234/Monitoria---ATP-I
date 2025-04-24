// 4. Identificar outliers em um vetor
// Descrição: Um outlier é um valor que foge muito dos demais valores de um conjunto. Neste exercício, os alunos devem identificar os outliers utilizando o critério do intervalo interquartil (IQR).
// Passos:
// Ordenar o vetor.
// Determinar o primeiro quartil (Q1), segundo quartil(Q2) e o terceiro quartil (Q3).
// Calcular o intervalo interquartil: IQR = Q3 - Q1.
// Qualquer número menor que Q1 - 1.5 * IQR ou maior que Q3 + 1.5 * IQR é um outlier.

// Entrada:
// Um número inteiro N.
// N números inteiros.

// Saída:
// Os valores identificados como outliers.


/* Exemplo:
    Entrada:
    7
    1 2 2 3 4 100 105
    Saída:
    Outliers: 100 105
*/
#include<stdio.h>

int main (){
    int tam_vetor;
    float posQ1,posQ2,posQ3,IQR;
    float vetor_Quartil[3]; 
    float min, max;

    printf("Tamanho do vetor: ");
    scanf("%d",&tam_vetor);
    int vetor_num[tam_vetor];

    for(int i=0;i<tam_vetor; i++){
        printf("Digite o numero da posicao [%d]: ",i);
        scanf("%d", &vetor_num[i]);
    }

    //1° Passo: Ordenar o vetor
    float auxTroca;
    int flagTroca;
    for(int i=0; i<tam_vetor-1;i++){
        flagTroca = 0;
        for(int j = 0; j < tam_vetor-1; j++){
            if(vetor_num[j] > vetor_num[j+1]){
                auxTroca = vetor_num[j];
                vetor_num[j] = vetor_num[j+1];
                vetor_num[j+1] = auxTroca;
                flagTroca = 1;
            }
        }
        if(flagTroca == 0) break;
    }

    //Determina a posição dos quartis
    posQ1 = (tam_vetor+1)/4.0;
    posQ2 = (tam_vetor+1)/2.0;
    posQ3 = 3*(tam_vetor+1)/4.0;

    float posicoes_vetor[] = {posQ1,posQ2,posQ3};
    
    for(int i = 0; i < 3; i++){
        int idx = (int) posicoes_vetor[i];
        float frac = posicoes_vetor[i] - idx;

        if(frac == 0){
            vetor_Quartil[i] = vetor_num[idx-1];
        }else{
            vetor_Quartil[i] = vetor_num[idx-1]*(1-frac) + vetor_num[idx]*frac;  //interpolação
        }   
    }

    for(int i = 0; i < 3; i++){
        printf("Q%d: %.2f\n",i+1,vetor_Quartil[i]); 
    }

    float Q1 = vetor_Quartil[0];   //Apenas para melhor a legibilidade
    float Q2 = vetor_Quartil[1];
    float Q3 = vetor_Quartil[2];

    IQR = Q3 - Q1;
    min = Q1 - 1.5*IQR;
    max = Q3 + 1.5*IQR;

    printf("Min: %.2f\n",min);
    printf("Max: %.2f\n",max);
    printf("Outliers: ");
    int encontrou = 0;
    for(int i = 0; i < tam_vetor; i++){
        if(vetor_num[i]<min || vetor_num[i]>max){
            printf("%d ",vetor_num[i]);
            encontrou=1;
        }
    }
    if (!encontrou) printf("Nenhum");
    printf("\n");
    return 0;
}