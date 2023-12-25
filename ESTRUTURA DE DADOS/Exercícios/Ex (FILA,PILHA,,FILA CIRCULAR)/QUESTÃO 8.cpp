//Quest�o 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

#define MAX_SIZE 100 // Tamanho m�ximo da fila

// Estrutura para representar um paciente
typedef struct {
    char nome[50];
    int idade;
    // Outras informa��es do paciente podem ser adicionadas aqui
} Paciente;

// Estrutura da fila
typedef struct {
    Paciente elementos[MAX_SIZE];
    int inicio, fim;
} Fila;

// Fun��o para inicializar a fila
void iniciarFila(Fila *fila) {
    fila->inicio = fila->fim = -1;
}

// Fun��o para verificar se a fila est� vazia
int filaVazia(Fila *fila) {
    return (fila->inicio == -1);
}

// Fun��o para verificar se a fila est� cheia
int filaCheia(Fila *fila) {
    return ((fila->fim + 1) % MAX_SIZE == fila->inicio);
}

// Fun��o para inserir um paciente na fila
void enfileirar(Fila *fila, Paciente paciente) {
    if (filaCheia(fila)) {
        printf("A fila est� cheia. N�o � poss�vel adicionar mais pacientes.\n");
        return;
    }

    if (fila->inicio == -1) {
        fila->inicio = fila->fim = 0;
    } else {
        fila->fim = (fila->fim + 1) % MAX_SIZE;
    }

    fila->elementos[fila->fim] = paciente;
}

// Fun��o para remover um paciente da fila
void desenfileirar(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila est� vazia. N�o h� pacientes para remover.\n");
        return;
    }

    if (fila->inicio == fila->fim) {
        fila->inicio = fila->fim = -1;
    } else {
        fila->inicio = (fila->inicio + 1) % MAX_SIZE;
    }
}

// Fun��o para obter o pr�ximo paciente da fila (sem remover)
void proximoPaciente(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila est� vazia. N�o h� pacientes no momento.\n");
        return;
    }

    printf("Pr�ximo paciente a ser atendido: %s, %d anos.\n",
           fila->elementos[fila->inicio].nome,
           fila->elementos[fila->inicio].idade);
}

int main() {
	setlocale(LC_ALL, "portuguese");
    Fila filaDeEspera;
    iniciarFila(&filaDeEspera);

    int opcao;
    Paciente novoPaciente;

    printf("Bem-vindo � Cl�nica M�dica S�o Bento\n");

    do {
        printf("\nEscolha uma op��o:\n");
        printf("1. Adicionar novo paciente na fila\n");
        printf("2. Remover pr�ximo paciente atendido\n");
        printf("3. Ver pr�ximo paciente a ser atendido\n");
        printf("0. Sair\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nInforme o nome do paciente: ");
                scanf("%s", novoPaciente.nome);
                printf("Informe a idade do paciente: ");
                scanf("%d", &novoPaciente.idade);
                enfileirar(&filaDeEspera, novoPaciente);
                printf("Paciente adicionado na fila com sucesso.\n");
                break;
            case 2:
                desenfileirar(&filaDeEspera);
                printf("Paciente removido da fila.\n");
                break;
            case 3:
                proximoPaciente(&filaDeEspera);
                break;
            case 0:
                printf("Encerrando o programa. Obrigado!\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

