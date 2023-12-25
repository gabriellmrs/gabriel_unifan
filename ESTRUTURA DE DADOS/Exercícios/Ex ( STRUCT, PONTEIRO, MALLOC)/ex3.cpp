#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define tdcarros 30
#define string 100

typedef struct {
    char codigoVeicular[string];
    char modelo[string];
    char nome[string];
    char fabricante[string];
    char Placa[string];
    char combustivel[string];
    double capacidadeTanque;
    double autonomia;
    double quilometragemPercorrida;
    double preco;
} carros;

void enunciado() {
	//enunciado atividade do carro
    setlocale(LC_ALL, "");

    carros cadastro[tdcarros];

    for (int x = 0; x < tdcarros; x++) {
        printf("Nome do Carro [%d]: ", x + 1);
        scanf("%s", cadastro[x].nome);
        fflush(stdin);
        printf("Modelo do Carro [%d]: ", x + 1);
        scanf("%s", cadastro[x].modelo);
        fflush(stdin);
        printf("Fabricante do Carro [%d]: ", x + 1);
        scanf("%s", cadastro[x].fabricante);
        fflush(stdin);
        printf("Tipo de combust�vel [%d]: ", x + 1);
        scanf("%s", cadastro[x].combustivel);
        fflush(stdin);
        printf("========================================\n");
    }
    for (int x = 0; x < tdcarros; x++){
    	printf("CARRO [%d]",x+1);
    	printf("Nome: %d",cadastro[x].nome);
    	printf("Modelo: %d",cadastro[x].modelo);
    	printf("Fabricante: %d",cadastro[x].fabricante);
    	printf("Combust�vel: %d",cadastro[x].combustivel);
	}
}

void topico_1() {
	//topico 1 atividade do carro
	setlocale(LC_ALL, "");
	
    double distancia, consumo, preco, valorGasto;

    printf("Informe a dist�ncia da viagem em quil�metros: ");
    scanf("%lf", &distancia);
	fflush(stdin);
    printf("Informe o consumo de combust�vel do ve�culo em km/l: ");
    scanf("%lf", &consumo);
	fflush(stdin);
    printf("Informe o pre�o do combust�vel por litro em reais: ");
    scanf("%lf", &preco);
	fflush(stdin);
    
    valorGasto = (distancia / consumo) * preco;
   
    printf("O valor gasto em combust�vel para a viagem �: %.2lf reais\n", valorGasto);    
}

void topico_2() {
	//topico 2 atividade do carro
	setlocale(LC_ALL, "");
	
    double consumo, capacidade, maxima;
    
    printf("Informe o consumo de combust�vel do ve�culo em km/l: ");
    scanf("%lf", &consumo);
	fflush(stdin);
    printf("Informe a capacidade do tanque de combust�vel em litros: ");
    scanf("%lf", &capacidade);
	fflush(stdin);
    
   maxima = consumo * capacidade;

    printf("A dist�ncia m�xima que o ve�culo pode percorrer com um tanque cheio �: %.2lf km\n", maxima);    
}

void topico_3() {
	//topico 3 atividade do carro
	setlocale(LC_ALL, "");
	
    double consumo, capacidade, distanciaMaxima;

    printf("Informe o consumo de combust�vel do ve�culo em km/l: ");
    scanf("%lf", &consumo);
	fflush(stdin);
    printf("Informe a capacidade do tanque de combust�vel em litros: ");
    scanf("%lf", &capacidade);
	fflush(stdin);
	
    distanciaMaxima = consumo * capacidade;
    
    printf("A dist�ncia m�xima que o ve�culo pode percorrer com um tanque cheio �: %.2lf km\n", distanciaMaxima);
}


main(){

//	enunciado();
//	topico_1();	
//	topico_2();
//	topico_3();
}




