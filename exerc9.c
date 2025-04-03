// 9. Cálculo de Distâncias: Euclidiana, Manhattan e Chebyshev
// Descrição:
//  Implemente um programa que receba as coordenadas de dois pontos no plano cartesiano e calcule três tipos diferentes de distância entre eles:
// Distância Euclidiana:
//  dE=(x2−x1)2+(y2−y1)2d_E = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}dE​=(x2​−x1​)2+(y2​−y1​)2​
// Distância de Manhattan:
//  dM=∣x2−x1∣+∣y2−y1∣d_M = |x_2 - x_1| + |y_2 - y_1|dM​=∣x2​−x1​∣+∣y2​−y1​∣
// Distância de Chebyshev:
//  dC=max⁡(∣x2−x1∣,∣y2−y1∣)d_C = \max(|x_2 - x_1|, |y_2 - y_1|)dC​=max(∣x2​−x1​∣,∣y2​−y1​∣)
// Entrada:
// Dois números inteiros x1,y1x_1, y_1x1​,y1​ representando as coordenadas do primeiro ponto.
// Dois números inteiros x2,y2x_2, y_2x2​,y2​ representando as coordenadas do segundo ponto.

// Saída:
// A distância euclidiana entre os pontos, com duas casas decimais.
// A distância de Manhattan entre os pontos.
// A distância de Chebyshev entre os pontos.

// Exemplo:

// Entrada:
// 1 2
// 4 6

// Saída:
// Distância Euclidiana: 5.00
// Distância de Manhattan: 7
// Distância de Chebyshev: 4

#include<stdio.h>
#include<math.h>

int main(){
    int ponto1[2], ponto2[2];
    float distancia_euclidiana, distancia_manhattan, distancia_chebyshev;
    printf("Digite a coordenada (X,Y) do ponto 1: ");
    scanf("%d %d",&ponto1[0],&ponto1[1]);
    printf("Digite a coordenada (X,Y) do ponto 2: ");
    scanf("%d %d",&ponto2[0],&ponto2[1]);

    float dist_x = ponto1[0]-ponto2[0];
    float dist_y = ponto1[1]-ponto2[1];

    //distancia euclidiana
    distancia_euclidiana = pow(dist_x,2) + pow(dist_y,2);
    distancia_euclidiana = sqrt(distancia_euclidiana);

    //distancia de manhattan
    distancia_manhattan = fabs(dist_x) + fabs(dist_y);

    //distancia de Chebyshev
    distancia_chebyshev = fabs(dist_x) > fabs(dist_y) ? fabs(dist_x) : fabs(dist_y);   //Operador ternário

    printf("Distancia Euclidiana: %.2f\n", distancia_euclidiana);
    printf("Distancia de Manhattan: %.2f\n", distancia_manhattan);
    printf("Distancia de Chebyshev: %.2f\n", distancia_chebyshev);

}