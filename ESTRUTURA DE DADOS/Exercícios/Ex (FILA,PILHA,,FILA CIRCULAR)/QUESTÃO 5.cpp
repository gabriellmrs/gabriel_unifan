/* 5- Implemente uma fila circular, usando a estrutura de dados TFila, com as operações:
a) InicializarFila  
b) Enfileirar 
c) Desenfileirar
d) FilaVazia
e) FilaCheia
 */

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define MAX 4

int fila[MAX];
int comeco, final, qtd;

//Inicia a fila
void iniciar(){
	comeco = 0;
	final = 0;
	qtd = 0;
}

//Ver cheia
int verCheia(){
	if(qtd == MAX){
		return(1);		
	}	
		return(0);
}

//Ver vazia
int verVazia(){
	if(qtd == 0){
		return(1);
	}
		return(0);
}

//Inserir valor
void inserir(int valor){
	if(verCheia() == 1){
		verCheia();
	}
	else{
		if((final == MAX) && (qtd != MAX)){
			final = 0;
			fila[final] = valor;
			final++;
			qtd++;
		}
		else{
			fila[final] = valor;
			final++;
			qtd++;
		}
	}
}

//Remover valor
void remover(){
	if(verVazia() == 1){
		verVazia();
	}
	else{
		if((final < comeco) && (qtd != 0)){
			 comeco = 0;
			 printf("O valor retirado é: %d\n",fila[comeco]);
			 comeco++;
			 qtd--;
		}
		else{
			printf("O valor retirado é: %d\n",fila[comeco]);
			comeco++;
			qtd--;		
		}
	}
}

//Listar
void listar(){
	if(comeco < final){
		printf("Os valores da fila é:\n");
		for(int y = comeco; y < final; y++){
		printf("%d\n",fila[y]);
		}
	}
		else{
		printf("Os valores da fila é:\n");
		for(int x = comeco; x <= MAX -1; x++){
			printf("%d\n",fila[x]);			
		}
		for(int x = 0; x <= final -1; x++){
			printf("%d\n",fila[x]);
		}
	}		
}

//Ver Inicio
void inicio(){
	if(verVazia() == 1){
		verVazia();
	}
	else{
	printf("O TOPO da fila é:%d\n",fila[comeco]);
	}
}

//Ver fim
void fim(){
	if(verVazia() == 1){
		verVazia();
	}
	else{
		printf("O FIM da fila é: %d\n",fila[final -1]);
	}
}

void menu() {
		int escolha;
        int valor;
        
        do{
        	system ("cls");
        	
        printf("Menu:\n");
        printf("1. Inserir valor \n");
        printf("2. Remover valor \n");
        printf("3. Ver cheia \n");
        printf("4. Ver vazia\n");
        printf("5. Ver inicio\n");
        printf("6. Ver fim\n");
        printf("7. Listar\n");
        printf("8. Sair\n");
        
        printf("Escolha a opção\n");
		scanf("%d", &escolha);
        
		
		if(escolha >= 1 && escolha <= 9){
			switch (escolha) {
            case 1:           	
                printf("Digite o valor:\n");
                scanf("%d",&valor);
                inserir(valor);          
                break;
            case 2:
               	remover();    	
                break;
            case 3:
            	if(verCheia()==1){
                verCheia();
                printf("A fila está cheia !\n");
           		}
           		else{
           			verVazia();
           			printf("A fila não está cheia !\n");
				   }          				
                break;
            case 4:
                if(verVazia()==1){
                verVazia();
                printf("A fila está vazia !\n");
           		}
           		else{
           			verCheia();
           			printf("A fila não está vazia!\n");
				   }          				
                break;
            case 5:
            	inicio();
            	break;
            case 6:
            	fim();
            	break;
            	
            case 7:
            	listar();
            	break;           
			}
		} else {
			printf("Opção inválida. Tente novamente?");
		}
		
		printf("Pressione enter para continuar...");
		getchar();
		getchar();	
		
	}while(escolha != 8);
 	      		   
}

int main(){
	setlocale(LC_ALL, "portuguese");
	menu();
	return 0;
	
}
