#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam_tentativas, tam_senha = 0, aleatorio_opcao;
    int vetor_senha[10]; // tamanho máximo fixo para evitar alocação dinâmica
    int vetor_resposta[10];

    printf("---Configuração de Jogo----\n");
    printf("N° de Tentativas: ");
    scanf("%d", &tam_tentativas);
    printf("Gerar Aleatoriamente:\n1-Sim\n0-Nao\n");
    scanf("%d", &aleatorio_opcao);

    if (aleatorio_opcao) {
        printf("Tamanho da Senha (máx 10): ");
        scanf("%d", &tam_senha);
        for (int i = 0; i < tam_senha; i++) {
            vetor_senha[i] = rand() % 10;
        }
    } else {
        int senha, temp_senha;
        printf("Digite Senha: ");
        scanf("%d", &senha);
        temp_senha = senha;
        while (temp_senha > 0) {
            temp_senha /= 10;
            tam_senha++;
        }
        temp_senha = senha;
        for (int i = 0; i < tam_senha; i++) {
            vetor_senha[tam_senha - i - 1] = temp_senha % 10;
            temp_senha /= 10;
        }
    }

    int num_tentativas = 0;

    while (num_tentativas < tam_tentativas) {
        printf("----- JOGO TERMO -----\n");
        printf("Tamanho da Senha: %d\n", tam_senha);
        printf("Tentativa %d:\n", num_tentativas + 1);

        for (int i = 0; i < tam_senha; i++) {
            printf("Posição %d: ", i);
            scanf("%d", &vetor_resposta[i]);
        }

        int corretos_posicao = 0;
        int corretos_valor = 0;
        int usados_senha[10] = {0}; // para evitar contar duplicados
        int usados_resposta[10] = {0};

        // verificar valores corretos na posição correta
        for (int i = 0; i < tam_senha; i++) {
            if (vetor_resposta[i] == vetor_senha[i]) {
                corretos_posicao++;
                usados_senha[i] = 1;
                usados_resposta[i] = 1;
            }
        }

        // verificar valores corretos na posição errada
        for (int i = 0; i < tam_senha; i++) {
            if (!usados_resposta[i]) {
                for (int j = 0; j < tam_senha; j++) {
                    if (!usados_senha[j] && vetor_resposta[i] == vetor_senha[j]) {
                        corretos_valor++;
                        usados_senha[j] = 1;
                        break;
                    }
                }
            }
        }

        printf("Corretos na posição certa: %d\n", corretos_posicao);
        printf("Corretos fora de posição: %d\n", corretos_valor);

        if (corretos_posicao == tam_senha) {
            printf("Parabéns! Você acertou a senha!\n");
            break;
        }

        num_tentativas++;
    }

    if (num_tentativas == tam_tentativas) {
        printf("Você excedeu o número de tentativas. A senha era: ");
        for (int i = 0; i < tam_senha; i++) {
            printf("%d", vetor_senha[i]);
        }
        printf("\n");
    }

    return 0;
}