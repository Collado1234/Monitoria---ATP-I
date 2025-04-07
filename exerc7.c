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

        int posicoes_corretas = 0;
        int valor_corretos = 0;
        int check_posicao_correta[10] = {0}; // para evitar contar duplicados
        int check_numero_correto[10] = {0};


        for(int i = 0; i < tam_senha; i++){
            if(vetor_resposta[i]==vetor_senha[i]){
                posicoes_corretas++;
                check_numero_correto[i] = 1;
                check_posicao_correta[i] = 1;
            }
        }

        for(int i = 0; i<tam_senha; i++){
            if(!check_posicao_correta[i])
        }
        


    }while(option_menu != 0);


}