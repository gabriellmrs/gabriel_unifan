/* Utilizando uma pilha, escreva um programa que disponha de uma rotina que receba um número inteiro positivo no formato decimal e converta este número para o formato binário. Exemplos:
5 ? 101
13 ? 1101   
1 ? 1
O programa deverá desempilhar o resultado e exibi-lo.
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

// Verificar se a pilha está vazia
int pilhaVazia() {
	if(topo == -1){
		return 1;
	}
    else{
    	return 0;
	}
}

// Função para converter decimal para binário OK
void decimalParaBinario(int numeroDecimal) {
    while (numeroDecimal > 0) {
        empilhar(numeroDecimal % 2);
        numeroDecimal /= 2;
    }

    // Desempilhar e exibir o resultado binário
    printf("O resultado binário é: ");
    while (pilhaVazia()==0) {
        printf("%d", desempilhar());
    }
    printf("\n");
}

int main() {
	setlocale(LC_ALL,"");
    iniciar();

    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    decimalParaBinario(numero);

    return 0;
}

