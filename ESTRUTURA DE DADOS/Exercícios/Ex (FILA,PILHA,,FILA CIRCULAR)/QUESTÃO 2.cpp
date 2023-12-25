/* 2- Escrever um algoritmo que leia um n�mero indeterminado de valores inteiros.
O valor 0 (zero) finaliza a entrada de dados. Para cada valor lido, determinar
se ele � um n�mero par ou �mpar. Se o n�mero for par, ent�o inclu�-lo na FILA PAR;
caso contr�rio, inclu�-lo na FILA �MPAR. Ap�s o t�rmino da 2a entrada de dados, retirar
um elemento de cada fila alternadamente (iniciando-se pela FILA �MPAR) at� que ambas as
filas estejam vazias. Se o elemento retirado de uma das filas for um valor positivo, 
ent�o inclu�-lo em uma PILHA; caso contr�rio, remover um elemento da PILHA. Finalmente,
escreva o conte�do da pilha. */

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
        printf("Pilha cheia! N�o � poss�vel empilhar.\n");
        return;
    }
	pilha[++topo] = elemento;
}

//Remover elemento da pilha
int desempilhar() {
    if (topo == -1) {
        printf("Pilha vazia! N�o � poss�vel desempilhar.\n");
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
            // Determina se o n�mero � par ou �mpar
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
            printf("Retirado da FILA �MPAR: %d\n", elementoImpar);
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

    // Mostrar o conte�do da pilha
    printf("\nConte�do final da PILHA:\n");
    while (topo >= 0) {
        printf("%d\n", desempilhar());
    }

    return 0;
}

