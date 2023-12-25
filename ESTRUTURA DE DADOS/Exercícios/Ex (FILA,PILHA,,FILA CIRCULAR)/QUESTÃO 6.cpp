/*6- Implemente um programa que divida uma fila em duas outras filas,
 uma com elementos de chaves pares e a outra com elementos de chaves ímpares. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 10

int fila[MAX];
int filaPar[MAX];
int filaImpar[MAX];
int comeco, final, comecoPar, finalPar, comecoImpar, finalImpar;

//Inicia a FILA 
void iniciar(){
	comeco = 0;
	final = 0;
}

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

//Inserir elemento na FILA
void inserir(int elemento){
	fila[final] = elemento;
	final++;
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

//Remover elemento na FILA
void remover(){
	comeco++;	
}

//Remover elemento da FILA PAR
void removerPar(){	
	comecoPar++;
}

//Remover elemento da FILA IMPAR
void removerImpar(){	
    comecoImpar++;
}

//Mostrar FILA
void listar() {	
    printf("A listagem dos valores da fila é: \n");
    for (int x = 0; x < final; x++) {
        printf("%d\n",fila[x]);
    }
}

//Mostrar fila PAR
void listarPar() {	
    printf("A listagem dos valores da fila PAR é: \n");
    for (int x = 0; x < finalPar; x++) {
        printf("%d\n",filaPar[x]);
    }
}

//Mostrar fila IMPAR
void listarImpar() {	
    printf("A listagem dos valores da fila IMPAR é: \n");
    for (int x = 0; x < finalImpar; x++) {
        printf("%d\n",filaImpar[x]);
    }
}

int main(){
	setlocale(LC_ALL,"");
	
	iniciarPar();
	iniciarImpar();
	iniciar();
		
	int numero;
	
    // Leitura dos valores
    printf("Digite os valores inteiros (digite 0 para finalizar):\n");
    do {
        scanf("%d", &numero);
        inserir(numero);
        
    } while (numero != 0);
    	system("cls");
    	listar();//mostrar FILA
    	
    	for(int x = comeco; x < final; x++){//Dividir a fila principal em fila par e impar
    	 	if (fila[x] != 0){
            	// Determina se o número é par ou ímpar
            	if (fila[x] % 2 == 0){
                	inserirPar(fila[x]);
            	}
				else{
                	inserirImpar(fila[x]);
            	}
        }
    }
    	listarPar();
    	printf("\n");
    	listarImpar();
    
    	
    
    return 0;
}

