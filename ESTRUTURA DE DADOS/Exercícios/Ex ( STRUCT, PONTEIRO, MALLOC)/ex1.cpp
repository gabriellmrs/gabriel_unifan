#include<stdio.h>
#include<locale>.h
#define quant 2

//criação do tipo cadastro
 typedef struct{
 	int idade[quant];
 	char sexo[quant];
 	int filhos[quant];
 	float salario[quant];
 }cadastro;
 
 main(){
 	//alterar texto para norma de lingua portuguesa
 	setlocale(LC_ALL,"");
 	cadastro a;
 	int x, count = 0, count_mulher = 0;
 	float soma_sal = 0, salario_ma = 0, salario_me = 99999;
 	char maior, menor;
 	 
 	for(x=0; x<quant; x++){
 		printf("Cadastro %d \n",x+1);
 		printf("Qual sua idade: ");
 		scanf("%d",&a.idade[x]);
 		fflush(stdin);
 		printf("Qual seu sexo: ");
 		scanf("%s",&a.sexo[x]);
 		fflush(stdin);
 		printf("Tem quantos filhos: ");
 		scanf("%d",&a.filhos[x]);
 		fflush(stdin);
 		printf("Qual seu salario: ");
 		scanf("%f",&a.salario[x]); 	
		fflush(stdin);	
	 }
	 
	 for(x=0; x<quant; x++){
	 	soma_sal += a.salario[x];
	 }
	 
	 for(x=0; x<quant; x++){
	 	if(a.salario[x] > a.salario[x-1]){
	 		salario_ma = a.salario[x];
	 		maior = a.sexo[x];
	 		
		 }
		 else if(a.salario[x-1] < salario_me){
		 	salario_me = a.salario[x];
		 	menor = a.sexo[x];
		 }
	 }
	 for(x=0; x<quant; x++){
	 	if(a.idade[x]<30){
	 		if(a.filhos[x]>5){
	 			if(a.salario[x]<1000){
	 				count += 1;
				 }
			 }
		 }
	 }
	 int count_filho = 0;
	 for(x=0; x<quant; x++){
	 	if(a.sexo[x] == 'F' || a.sexo[x] == 'f'){
	 		count_mulher += 1;
	 		if(a.filhos[x] > 0){
	 			count_filho += 1;
	 			
			 }
		 }
	 }
	 float porcentagem = 0.00;
	 porcentagem = count_filho / count_mulher *100;

	 
	 		 
	 printf("\nQuestão A\n A media de salario é: %.2f\n",soma_sal/quant);
	 printf("\nQuestão B\n O maior salario é do sexo %c com salario de: %.2f",maior,salario_ma);
	 printf("\n O menor salario é do sexo %c com salario de: %.2f",menor,salario_me);
	 printf("\nQuestão C\n A quantidade de pessoas com menos de 30 anos, mais de 5 filhos e salário menor que R$ 1.000,00 é: %d",count);
 	printf("\nQuestão D\n A porcentagem de pessoas do sexo feminino que possuem filhos é de: %.2f %",porcentagem);
 }
