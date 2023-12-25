/* 4- Implemente uma função de remoção em pilha de forma que
 ela remova de uma só vez uma quantidade de elementos que
  o usuário determinar e em seguida exiba a pilha. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 10

int pilha[MAX];
int topo;

//Inicia a pilha
void iniciar(){
	topo = -1;
}

//Ver se a pilha está cheia
int verCheia(){
	if(topo==MAX){
		printf("Pilha cheia!\n");
		return 1;
	}
	else{
		return 0;
	}
}

//Ver se a pilha está vazia
int verVazia(){
	if(topo == -1){
		printf("A pilha está vazia!\n");
		return 1;
	}
	else{
		return 0;
	}
}

//Inserir elemento
void inserir(int elemento){
	topo++;
	pilha[topo] = elemento;
}

//Remover elemento
void remover(){
	printf("O NUMERO RETIRADO FOI: %d\n", pilha[topo]);
	topo--;
}

//Listar pilha
void listar(){
	printf("A listagem dos valores da pilha é: \n");
	for(int x = 0; x<=topo; x++){
		printf("O elemento na posição %d é: %d\n",x,pilha[x]);	
	}
}

//Ver o topo da pilha
void verTopo(){
	printf("O topo da pilha é: %d\n",pilha[topo]);
}

int main(){
	setlocale(LC_ALL,"");
	iniciar();
	int elemento,tirar;

	//Inserindo valores na fila
    printf("Insira os elementos na fila [Digite 0 para parar]:\n");
    do {
        scanf("%d", &elemento);
        if (elemento != 0) {
            inserir(elemento);
        }
    } while (elemento != 0);
    	system("cls");
    
    	//mostrar pilha
   		listar();
   		
   		//recolher a quantidade que vai remover da pilha
    	printf("Digite a quantidade de numeros que deseja remover da pilha: \n");
   		scanf("%d",&tirar);   		
   			for(int x = 0; x < tirar; x++){
   				remover();
		   }
		   printf("\n");
    	
    	//mostrar pilha com os elementos removidos
    	listar();
    
   
}








