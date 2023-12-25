#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
# define MAX 10

int fila[MAX];
int comeco, final;

//Inserir elemento
void inserir(int elemento){
	fila[final] = elemento;
	final++; 
	
}

//Remover elemento
void remover(){	
	printf("O valor retirado e: %d\n", fila[comeco]);
	comeco++;
	
}

//Ver se a fila está cheia 
int verCheia(){
	int x;
	if(final==MAX){
		x = 1;
	}
	else{
		x = 0;
	}
	return(x);
}

//Ver se a fila está vazia
int verVazia(){
	int x;
	if(comeco==final){
		x = 1;
	}
	else{
		x = 0;
	}
	return(x);
}

//Ver iníco
void verInicio(){
	printf("Elemeno no inicio da fila: %d\n",fila[comeco]);
	
}

//Ver fim
void verFim(){
	printf("O ultimo elemento da fila e: %d\n",fila[final-1]);
	
}

// Listar fila
void listar() {	
    printf("A listagem dos valores da fila é: \n");
    for (int x = 0; x < final; x++) {
        printf("O elemento na posição %d é %d\n", x, fila[x]);
    }
}	

//Buscar elemento
void buscar(int elemento){
	//Varre procurando o elemento
	for(int x=0; x<=final; x++){
		if(elemento == fila[x]){
			printf("O valor foi encontrado na posição %d\n",x);
			break;
		}//So vai mostrar que não tem quando varrer todo o vetor			
		else if(x==final){
			if(elemento != fila[x]){
				printf("Não tem esse elemento na fila\n");
			}
		}		
}
}

int main(){
	setlocale(LC_ALL,"");
	comeco = 0;
	final = 0;
	int opc;
		
	do{				
		printf("			MENU\n");
		printf("1- Inserir valor na fila\n");
		printf("2- Remover valor da fila\n");
		printf("3- Ver se a fila esta cheia\n");
		printf("4- Ver se a fila esta vazia\n");
		printf("5- Ver inicio da fila\n");
		printf("6- Ver fim da fila\n");
		printf("7- Listagem da fila\n");
		printf("8- Buscar\n");
		printf("9- Sair\n");
		scanf("%d",&opc);
		system("cls");
	
			switch(opc){
				
			//Inserir valor na fila	
			case 1:
				int num1;
					if(verCheia()==1){
						printf("Infelizmente a fila está cheia\n");
						system("pause");
						system("cls");
					}
					else{
						printf("Qual elemento você gostaria de inserir?\n");
						fflush(stdin);
						scanf("%d", &num1);
						inserir(num1);
						system("pause");
						system("cls");
					}
					break;
	
			case 2://Remover valor da fila
					if(verVazia()==1){
						printf("Infelizmente a fila está vazia\n");
						system("pause");
						system("cls");
					}
					else{
						remover();
						printf("O ultimo elemento foi removido! (Pressione qualquer tecla para coninuar)\n");
						system("pause");
						system("cls");
					}
					break;
		
			case 3://Ver se a fila esta cheia
					if(verCheia()==1){
						printf("A fila está cheia\n");
						system("pause");
						system("cls");
					}
					else{
						printf("A fila não está cheia\n");
						system("pause");
						system("cls");
					}
					break;
		
			case 4://Ver se a fila esta vazia
					if(verVazia()==1){
						printf("A fila está vazia\n");
						system("pause");
						system("cls");
					}
					else{
						printf("A fila não está vazia\n");
						system("pause");
						system("cls");
					}
					break;
	
			case 5://Ver inicio da fila
					if(verVazia()==1){
						printf("A fila está vazia!\n");	
						system("pause");
						system("cls");					
					}
					else{
						verInicio();
						system("pause");
						system("cls");						
					}					
					break;
		
			case 6://Ver fim da fila
					if(verVazia()==1){
						printf("A fila está vazia!\n");
						system("pause");
						system("cls");
					}
					else{
						verFim();
						system("pause");
						system("cls");
					}
					break;
		
			case 7://Listagem da fila
					if(verVazia()==1){
						printf("A fila está vazia!\n");
						system("pause");
						system("cls");
					}
					else{
						listar();
						system("pause");
						system("cls");
					}					
					break;
		
			case 8://Buscar	
					if(verVazia()==1){
						printf("A fila está vazia!\n");
						system("pause");
						system("cls");
					}
					else{
						int y;
						printf("Digite o valor que deseja buscar na fila\n");
						scanf("%d",&y);
						buscar(y);
						system("pause");
						system("cls");
					}								
					break;
		
	default:
		printf("Opção inválida, escolha uma opção listada!");
		system("pause");
		system("cls");
		break;
			
				
	}
}	while (opc != 9);

    return 0;
}







