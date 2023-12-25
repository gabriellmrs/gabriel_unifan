/* Utilizando uma pilha, escreva um programa que disponha de uma rotina que receba um n�mero inteiro positivo no formato decimal e converta este n�mero para o formato bin�rio. Exemplos:
5 ? 101
13 ? 1101   
1 ? 1
O programa dever� desempilhar o resultado e exibi-lo.
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define MAX 100

int pilha[MAX];
int topo;

//Iniciar a pilha
void iniciar(){
	topo = -1;
}
// Inserir elemento na pilha
void empilhar(int elemento) {
	topo++;
    pilha[topo] = elemento;
}

// Remover elemento da pilha
int desempilhar() {
    return pilha[topo--];
}

// Verificar se a pilha est� vazia
int pilhaVazia() {
	if(topo == -1){
		return 1;
	}
    else{
    	return 0;
	}
}

// Fun��o para converter decimal para bin�rio OK
void decimalParaBinario(int numeroDecimal) {
    while (numeroDecimal > 0) {
        empilhar(numeroDecimal % 2);
        numeroDecimal /= 2;
    }

    // Desempilhar e exibir o resultado bin�rio
    printf("O resultado bin�rio �: ");
    while (pilhaVazia()==0) {
        printf("%d", desempilhar());
    }
    printf("\n");
}

int main() {
	setlocale(LC_ALL,"");
    iniciar();

    int numero;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
        return 1;
    }

    decimalParaBinario(numero);

    return 0;
}

