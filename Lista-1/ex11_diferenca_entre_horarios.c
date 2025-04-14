// 11. Diferença entre dois horários
// Enunciado:
//  Receba dois horários (apenas horas e minutos) e calcule quantos minutos se passaram entre eles.
// Exemplo de entrada:
//  Hora 1: 10 30
//  Hora 2: 12 10
// Saída Esperada: 100 minutos

#include <stdio.h>

int main () {
    int hora1, minuto1;
    int hora2, minuto2;
    int total1, total2, diferenca;

    printf("Digite a hora de início (hh mm): ");
    scanf("%d %d", &hora1, &minuto1);

    printf("Digite a hora de término (hh mm): ");
    scanf("%d %d", &hora2, &minuto2);

    // Converter tudo para minutos
    total1 = hora1 * 60 + minuto1;
    total2 = hora2 * 60 + minuto2;

    if (total2 < total1) {
        printf("Hora de término deve ser maior que a hora de início.\n");
        return 1;
    }

    diferenca = total2 - total1;

    printf("Diferença: %d minutos\n", diferenca);
    return 0;
}
