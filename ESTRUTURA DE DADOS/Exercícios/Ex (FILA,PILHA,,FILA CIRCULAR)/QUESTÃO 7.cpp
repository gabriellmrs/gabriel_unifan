/* 7- Pretende-se implementar um programa,
com base numa estrutura de dados linear
do tipo pilha, que inverta a ordem dos
caracteres recebidos. Por exemplo, quando
digitado numa entrada “António” deverá ser
invertida para “oinótnA”. a) Resolva o  exercício
utilizando uma pilha estática.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

//Estrutura da pilha
typedef struct {
    char itens[MAX];
    int topo;
} Pilha;

//Inicia a pilha
void inicializarPilha(Pilha *pilha) {
    pilha->topo = -1;
}

//Ver se a pilha esta vazia
int pilhaVazia(Pilha *pilha) {
    return (pilha->topo == -1);
}

//Ver se a pilha esta cheia
int pilhaCheia(Pilha *pilha) {
    return (pilha->topo == MAX - 1);
}

//Inserir valor na pilha
void empilhar(Pilha *pilha, char caractere) {
    if (pilhaCheia(pilha)){
        printf("A pilha está cheia! Não é possível empilhar.\n");
        return;
    }
    pilha->itens[++(pilha->topo)] = caractere;
}

//Remover valor da pilha
char desempilhar(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia! Não é possível desempilhar.\n");
        return '\0';
    }
    return pilha->itens[(pilha->topo)--];
}

//Inverter a string usando uma pilha
void inverterString(char *entrada) {
    Pilha pilha;
    inicializarPilha(&pilha);

    int tamanho = strlen(entrada);//Retorna o numero inteiro de uma string
    for (int i = 0; i < tamanho; i++) {
        empilhar(&pilha, entrada[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        entrada[i] = desempilhar(&pilha);
    }
}

int main() {
    char entrada[MAX];
    
    printf("Digite a string a ser invertida: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = '\0'; //Remove o caractere de nova linha adicionado pelo fgets

    inverterString(entrada);

    printf("String invertida: %s\n", entrada);

    return 0;
}

