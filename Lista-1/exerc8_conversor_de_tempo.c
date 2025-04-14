// 8. Conversor de tempo
// Enunciado:
//  Receba do usuário uma quantidade de segundos e converta para horas, minutos e segundos.
// Exemplo de entrada: 3661
// Saída esperada: 1 hora(s), 1 minuto(s), 1 segundo(s)


#include <stdio.h>

int main(){
    int segundos, horas, minutos, restante_segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Cálculo de horas, minutos e segundos
    horas = segundos / 3600; // 1 hora = 3600 segundos
    restante_segundos = segundos % 3600; // Resto dos segundos após calcular as horas
    minutos = restante_segundos / 60; // 1 minuto = 60 segundos
    restante_segundos = restante_segundos % 60; // Resto dos segundos após calcular os minutos

    printf("%d segundo(s) = %d hora(s), %d minuto(s), %d segundo(s)\n", segundos, horas, minutos, restante_segundos);


    return 0;
}