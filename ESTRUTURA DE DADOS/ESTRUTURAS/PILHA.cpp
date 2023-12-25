#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 6

int pilha[6];
int topo;

//Ver se a pilha est� cheia
int verCheia(){
	if(topo==MAX){
		printf("Pilha cheia!\n");
		return 1;
	}
	else{
		return 0;
	}
}

//Ver se a pilha est� vazia
int verVazia(){
	if(topo == -1){
		printf("A pilha est� vazia!\n");
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
	printf("A listagem dos valores da pilha �: \n");
	for(int x = 0; x<=topo; x++){
		printf("O elemento na posi��o %d �: %d\n",x,pilha[x]);	
	}
}

//Ver o topo da pilha
void verTopo(){
	printf("O topo da pilha �: %d\n",pilha[topo]);
}

int main(){
	setlocale(LC_ALL,"");
	topo = -1;
	int opc;
	
	do{
		printf("			MENU\n");
		printf("1- Inserir valor na pilha\n");
		printf("2- Remover valor na pilha\n"); 
		printf("3- Ver se a pilha est� CHEIA\n");
		printf("4- Ver se a pilha est� VAZIA\n");
		printf("5- Listar pilha\n");
		printf("6- Ver topo da pilha\n");
		printf("7- Sair\n");
		scanf("%d",&opc);
		system("cls");
		
			switch(opc){
				
			//Inserir valor na fila	
			case 1:
				int valor;
				if(verCheia()==1){
					verCheia();
					system("pause");
					system("cls");
				}
				else{
					printf("Qual elemento voc� gostaria de inserir?\n");
					fflush(stdin);
					scanf("%d", &valor);
					inserir(valor);
					system("pause");
					system("cls");
				}
				break;
				
			//Remover valor na pilha	
			case 2:
				if(verVazia()==1){
					verVazia();
					system("pause");
					system("cls");
				}
				else{
					remover();
					system("pause");
					system("cls");
				}
				break;
			
			//Ver se a pilha est� cheia	
			case 3:
				if(verCheia()==1){
					verCheia();
					system("pause");
					system("cls");
				}
				else{
					printf("A pilha n�o est� cheia\n");
					system("pause");
					system("cls");
				}
				break;
			
			//Ver se a pilha est� vazia	
			case 4:
				if(verVazia()==1){
					verVazia();
					system("pause");
					system("cls");
				}
				else{
					printf("A pilha n�o est� vazia\n");	
					system("pause");
					system("cls");
				}
				break;
			
			//Listar pilha	
			case 5:
				if(verVazia()==1){
					verVazia();
					system("pause");
					system("cls");
				}
				else{
					listar();
					system("pause");
					system("cls");
				}
				break;
			
			//Ver topo da pilha	
			case 6:
				if(verVazia()==1){
					verVazia();
					system("pause");
					system("cls");
				}
				else{
					verTopo();
					system("pause");
					system("cls");
				}
				break;
				
		default:
			printf("Op��o inv�lida, escolha uma op��o listada!");
			system("pause");
			system("cls");
			break;
				
			
	}
	
}while (opc != 7);
   return 0;
}








