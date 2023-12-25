/* 3 - Dada uma fila sequencial, escreva um programa que inverta a
 ordem dos elementos da fila, utilizando para isso uma pilha. Exibir a pilha e a fila. */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 10

int pilha[MAX];
int topo;
int fila[MAX], filaIv[MAX];
int comeco, final, comecoIv, finalIv;

//Iniciar Pilha
void iniciarPilha(){
	topo = -1;
}

//Inserir elemento
void inserirPilha(int elemento){
	topo++;
	pilha[topo] = elemento;
}

//Remover elemento
void removerPilha(){
	printf("O NUMERO RETIRADO FOI: %d\n", pilha[topo]);
	topo--;
}

//Listar pilha
void listarPilha(){
	printf("A listagem dos valores da pilha é: \n");
	for(int x = 0; x<topo; x++){
		printf("%d\n",pilha[x]);	
	}
}

//Iniciar fila
void iniciarFila(){
	comeco = 0;
	final = 0;
}

//Inserir elemento
void inserirFila(int elemento){
	fila[final] = elemento;
	final++; 
	
}

//Remover elemento
void removerFila(){	
	printf("O valor retirado e: %d\n", fila[comeco]);
	comeco++;
	
}

// Listar fila
void listarFila() {	
    printf("A listagem dos valores da fila é: \n");
    for (int x = 0; x < final; x++) {
        printf("%d\n",fila[x]);
    }
}

//Iniciar fila INVERTIDA
void iniciarFilaIv(){
	comecoIv = 0;
	finalIv = 0;
}

//Inserir elemento FILA INVERTIDA
void inserirFilaIv(int elemento){
	filaIv[finalIv] = elemento;
	finalIv++; 
	
}

//Remover elemento FILA INVERTIDA
void removerFilaIv(){	
	printf("O valor retirado e: %d\n", filaIv[comecoIv]);
	comecoIv++;
	
}

// Listar FILA INVERTIDA
void listarFilaIv() {	
    printf("A listagem dos valores da fila INVERTIDA é: \n");
    for (int x = 0; x < finalIv; x++) {
        printf("%d\n",filaIv[x]);
    }
}		

//Mudar de fila para pilha
void filaParaPilha(){
    	for(int x = comeco; x<=final; x++){
    		inserirPilha(fila[x]);
		}
}

//Mudar de Pilha para Fila Invertida
void pilhaParaFilaIv(){
	for (int x = topo; x > -1; x--){
			if(pilha[x] != 0){
				inserirFilaIv(pilha[x]);
			}      
    }
}

int main(){
	setlocale(LC_ALL,"");
	iniciarPilha();
	iniciarFila();
	iniciarFilaIv();
	
	int elemento;
	
	    printf("Insira os elementos na fila [Digite 0 para parar]:\n");
    do {
        scanf("%d", &elemento);
        if (elemento != 0) {
            inserirFila(elemento);
        }
    } while (elemento != 0);
    	system("cls");
    	
    	//fila para pilha
		filaParaPilha();
		//fila
		listarFila();
		//pilha
		listarPilha();
		//pilha para fila invertida
		pilhaParaFilaIv();
		//listar fila invertida		
		listarFilaIv();
		
}








