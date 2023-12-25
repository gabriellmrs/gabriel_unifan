/* 2- Escrever um algoritmo que leia um número indeterminado de valores inteiros.
O valor 0 (zero) finaliza a entrada de dados. Para cada valor lido, determinar
se ele é um número par ou ímpar. Se o número for par, então incluí-lo na FILA PAR;
caso contrário, incluí-lo na FILA ÍMPAR. Após o término da 2a entrada de dados, retirar
um elemento de cada fila alternadamente (iniciando-se pela FILA ÍMPAR) até que ambas as
filas estejam vazias. Se o elemento retirado de uma das filas for um valor positivo, 
então incluí-lo em uma PILHA; caso contrário, remover um elemento da PILHA. Finalmente,
escreva o conteúdo da pilha. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 10

int filaPar[MAX];
int filaImpar[MAX];
int pilha[MAX];
int comecoPar, finalPar, comecoImpar, finalImpar, topo;

//Inicia a fila PAR
void iniciarPar(){
	comecoPar = 0;
	finalPar = 0;
}

//Inicia a fila IMPAR
void iniciarImpar(){
	comecoImpar = 0;
	finalImpar = 0;
}

//Iniciar Pilha
void iniciarPilha(){
	topo = -1;
}
//Inserir elemento na FILA PAR
void inserirPar(int elemento){
	filaPar[finalPar] = elemento;
	finalPar++;
}

//Inserir elemento na FILA IMPAR
void inserirImpar(int elemento){
	filaImpar[finalImpar] = elemento;
	finalImpar++;
}

//Remover elemento da FILA PAR
int removerPar(){	
	return filaPar[comecoPar++];
}

//Remover elemento da FILA IMPAR
int removerImpar(){	
    return filaImpar[comecoImpar++];
}

//Inserir elemento na pilha
void empilhar(int elemento){
    if (topo == MAX - 1) {
        printf("Pilha cheia! Não é possível empilhar.\n");
        return;
    }
	pilha[++topo] = elemento;
}

//Remover elemento da pilha
int desempilhar() {
    if (topo == -1) {
        printf("Pilha vazia! Não é possível desempilhar.\n");
        return -1;
    }
    return pilha[topo--];
}

int main(){
	setlocale(LC_ALL,"");
	
	iniciarPar();
	iniciarImpar();
	iniciarPilha();
	
	int numero;
	
    // Leitura dos valores
    printf("Digite os valores inteiros (digite 0 para finalizar):\n");
    do {
        scanf("%d", &numero);

        if (numero != 0) {
            // Determina se o número é par ou ímpar
            if (numero % 2 == 0) {
                inserirPar(numero);
            } else {
                inserirImpar(numero);
            }
        }
    } while (numero != 0);

    // Remover elementos das filas e inserir na pilha alternadamente
    while (comecoPar < finalPar || comecoImpar < finalImpar) {
        if (comecoImpar < finalImpar) {
            int elementoImpar = removerImpar();
            printf("Retirado da FILA ÍMPAR: %d\n", elementoImpar);
            empilhar(elementoImpar);
        }

        if (comecoPar < finalPar) {
            int elementoPar = removerPar();
            printf("Retirado da FILA PAR: %d\n", elementoPar);

            if (elementoPar > 0) {
                empilhar(elementoPar);
            } else {
                int elementoRemovido = desempilhar();
                printf("Removido da PILHA: %d\n", elementoRemovido);
            }
        }
    }

    // Mostrar o conteúdo da pilha
    printf("\nConteúdo final da PILHA:\n");
    while (topo >= 0) {
        printf("%d\n", desempilhar());
    }

    return 0;
}

