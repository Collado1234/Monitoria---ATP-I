// 14. Cálculo das raízes de uma equação do 2º grau (Bhaskara)
// Tema: Álgebra / Resolução de equações
//  Enunciado: Equações do segundo grau aparecem com frequência em problemas de otimização, gráficos e algoritmos.
//  Crie um programa que receba os coeficientes A, B e C de uma equação do tipo:
// Ax²+Bx+C = 0

// e calcule as raízes reais utilizando a fórmula de Bhaskara.
// Δ = B² - 4ac
// Se Δ < 0, informe que não há raízes reais.1 -2


// Se Δ=0, calcule a raiz única.


// Se Δ>0, calcule as duas raízes reais.




#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite os coeficientes a, b e c da equação (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Isso não é uma equação do segundo grau.\n");
        return 1;
    }

    delta = pow(b,2) - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
