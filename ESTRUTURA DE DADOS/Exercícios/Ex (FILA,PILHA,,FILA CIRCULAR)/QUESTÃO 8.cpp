//Questão 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

#define MAX_SIZE 100 // Tamanho máximo da fila

// Estrutura para representar um paciente
typedef struct {
    char nome[50];
    int idade;
    // Outras informações do paciente podem ser adicionadas aqui
} Paciente;

// Estrutura da fila
typedef struct {
    Paciente elementos[MAX_SIZE];
    int inicio, fim;
} Fila;

// Função para inicializar a fila
void iniciarFila(Fila *fila) {
    fila->inicio = fila->fim = -1;
}

// Função para verificar se a fila está vazia
int filaVazia(Fila *fila) {
    return (fila->inicio == -1);
}

// Função para verificar se a fila está cheia
int filaCheia(Fila *fila) {
    return ((fila->fim + 1) % MAX_SIZE == fila->inicio);
}

// Função para inserir um paciente na fila
void enfileirar(Fila *fila, Paciente paciente) {
    if (filaCheia(fila)) {
        printf("A fila está cheia. Não é possível adicionar mais pacientes.\n");
        return;
    }

    if (fila->inicio == -1) {
        fila->inicio = fila->fim = 0;
    } else {
        fila->fim = (fila->fim + 1) % MAX_SIZE;
    }

    fila->elementos[fila->fim] = paciente;
}

// Função para remover um paciente da fila
void desenfileirar(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila está vazia. Não há pacientes para remover.\n");
        return;
    }

    if (fila->inicio == fila->fim) {
        fila->inicio = fila->fim = -1;
    } else {
        fila->inicio = (fila->inicio + 1) % MAX_SIZE;
    }
}

// Função para obter o próximo paciente da fila (sem remover)
void proximoPaciente(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila está vazia. Não há pacientes no momento.\n");
        return;
    }

    printf("Próximo paciente a ser atendido: %s, %d anos.\n",
           fila->elementos[fila->inicio].nome,
           fila->elementos[fila->inicio].idade);
}

int main() {
	setlocale(LC_ALL, "portuguese");
    Fila filaDeEspera;
    iniciarFila(&filaDeEspera);

    int opcao;
    Paciente novoPaciente;

    printf("Bem-vindo à Clínica Médica São Bento\n");

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Adicionar novo paciente na fila\n");
        printf("2. Remover próximo paciente atendido\n");
        printf("3. Ver próximo paciente a ser atendido\n");
        printf("0. Sair\n");
        printf("Opção: ");
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
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

