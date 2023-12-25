#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <cstdlib>
typedef struct   {
	int codProduto;
	char* NomeProduto;
	float Preco;
	
} ProdutosEstoque;


ProdutosEstoque Cadastro[5];

void Cadastrar10Itens(){
	ProdutosEstoque Cadastro[10];
		int i, codAleatorio;
	
	for(i = 0; i < 10 ; i ++)
	{
		codAleatorio =  rand() % 1000; // CÓDIGO ALEATÓRIO
		printf("Informe o nome do Produto : \n");
		scanf(" %s", &Cadastro[i].NomeProduto);
		printf("Informe o preço do Produto : \n");
		scanf("%f", &Cadastro[i].Preco);
		Cadastro[i].codProduto = codAleatorio;
		
	}
	printf("--------------------------------------------------------\n");
	printf(" EXIBIÇÃO DOS DADOS FORNECIDOS \n");
		for(i = 0; i < 10 ; i ++)
	{
		printf("_________________________________________________________\n");
		printf("Informe o nome do Produto : %s \n", Cadastro[i].NomeProduto);
		printf("Informe o preço do Produto : %.2f \n", Cadastro[i].Preco);
		printf("#Código do produto: %d \n", &Cadastro[i].codProduto);
	
		
	}
}

PreCadastro(){
	
	int i, codAleatorio;
	for(i = 0; i < 2 ; i ++)
	{
		if(i == 0){
		codAleatorio =  13205;
		strncpy(Cadastro[i].NomeProduto,"Pe de Moleque",sizeof(Cadastro[i].NomeProduto));
		Cadastro[i].Preco = 0.2;
		Cadastro[i].codProduto = codAleatorio;
			
		}else{
		codAleatorio =  15202;
		strncpy(Cadastro[i].NomeProduto,"Cocada Baiana",sizeof(Cadastro[i].NomeProduto)) ;
		Cadastro[i].Preco = 0.5;
		Cadastro[i].codProduto = codAleatorio;
		}	
		
	}
	printf(" EXIBIÇÃO DOS DADOS FORNECIDOS \n");
	for(i = 0; i < 2 ; i ++)
	{
	printf("--------------------------------------------------------\n");

	
	printf("Produto: %s \n", Cadastro[i].NomeProduto);
	printf("Preço: %.2f \n", Cadastro[i].Preco);
	printf("Código do Produto: %d \n", Cadastro[i].codProduto);
	}
}
AtribuiNoPonteiroEImprime(){
		int i, codAleatorio;

	
    ProdutosEstoque* p = (ProdutosEstoque*)malloc(sizeof(ProdutosEstoque) * 10);
	
	 if (p == NULL) {
        return 1; 
    }


    for (i = 0; i < 10; i++) {
        codAleatorio = rand() % 1000;

 
        p[i].NomeProduto = (char*)malloc(20);

        printf("Qual é o nome do produto?  \n");
        scanf("%s", p[i].NomeProduto);
        printf("Qual é o preço do produto? \n");
        scanf("%f", &p[i].Preco);
        p[i].codProduto = codAleatorio;
        printf("____________________________________  \n");
    }

    printf("EXIBIÇÃO DOS DADOS \n");
    for (i = 0; i < 10; i++) {
        printf("[ %d ] Código do produto: %d\n", i + 1, p[i].codProduto);
        printf("[ %d ] Nome do produto: %s\n", i + 1, p[i].NomeProduto);
        printf("[ %d ] Preço do produto: %.2f \n", i + 1, p[i].Preco);
        printf("____________________________________  \n");
        free(p[i].NomeProduto);
    }

	free(p);
}
main(){
	setlocale(LC_ALL,"Portuguese");

	//PreCadastro();
	Cadastrar10Itens();
	//AtribuiNoPonteiroEImprime();

	
	
}
