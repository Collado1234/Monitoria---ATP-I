// 7. Simular uma Fila Circular
// Descrição: O aluno deve implementar uma fila circular para armazenar números inteiros.
// Entrada:
// Comandos do tipo "ENQUEUE X" (para adicionar um número X à fila) ou "DEQUEUE" (para remover um número da fila).
// Saída:
// O estado da fila após cada operação.


// Exemplo:

// Entrada:
// ENQUEUE 5
// ENQUEUE 10
// DEQUEUE
// ENQUEUE 20

// Saída:
// Fila: 10 20


#include <stdio.h>
#include <string.h>

#define TAM_MAX 5  // Definindo um tamanho fixo pequeno para facilitar os testes

int fila[TAM_MAX]; // Array que representa a fila circular
int frente = -1, tras = -1; // Índices de controle

// Função para verificar se a fila está cheia
int fila_cheia() {
    return (tras + 1) % TAM_MAX == frente;
}

// Função para verificar se a fila está vazia
int fila_vazia() {
    return frente == -1;
}

// Função para adicionar um elemento à fila
void enqueue(int valor) {
    if (fila_cheia()) {
        printf("Fila cheia! Nao foi possivel adicionar %d.\n", valor);
        return;
    }
    if (fila_vazia()) {
        frente = 0; // Se estava vazia, reinicia os índices
    }
    tras = (tras + 1) % TAM_MAX;
    fila[tras] = valor;
}

// Função para remover um elemento da fila
void dequeue() {
    if (fila_vazia()) {
        printf("Fila vazia! Nao ha elementos para remover.\n");
        return;
    }
    if (frente == tras) { // Se há apenas um elemento na fila
        frente = tras = -1;
    } else {
        frente = (frente + 1) % TAM_MAX;
    }
}

// Função para imprimir a fila
void imprimir_fila() {
    if (fila_vazia()) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila: ");
    int i = frente;
    while (1) {
        printf("%d ", fila[i]);
        if (i == tras) break;
        i = (i + 1) % TAM_MAX;
    }
    printf("\n");
}

int main() {
    char comando[10];
    int valor;

    while (1) {
        printf("Digite um comando (ENQUEUE X, DEQUEUE, ou SAIR): ");
        scanf("%s", comando);

        if (strcmp(comando, "ENQUEUE") == 0) {
            scanf("%d", &valor);
            enqueue(valor);
        } else if (strcmp(comando, "DEQUEUE") == 0) {
            dequeue();
        } else if (strcmp(comando, "SAIR") == 0) {
            break;
        } else {
            printf("Comando invalido!\n");
        }

        imprimir_fila();
    }

    return 0;
}
