#include <stdio.h>
// 1. Faça um programa em C que imprima o seu nome
void questao1() {
    printf("Gabriel\n");
}
//2. Faça um programa em C que imprima o produto dos valores inteiros 30 e 27
void questao2() {
    int valor1 = 30;
    int valor2 = 27;
    int produto = valor1 * valor2;
    printf("O produto de %d e %d e igual a %d\n", valor1, valor2, produto);
}
// 3. Faça um programa em C que imprima a média aritmética entre os números 5, 8, 12
void questao3() {
    int numero1 = 5;
    int numero2 = 8;
    int numero3 = 12;
    double media = (numero1 + numero2 + numero3) / 3.0;
    printf("A media aritmetica entre %d, %d e %d e igual a %.2lf\n", numero1, numero2, numero3, media);

}
// 4. Função para ler e imprimir um número inteiro.
void questao4() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Voce digitou: %d\n", numero);
}

// 5. Função para ler e imprimir dois números reais.
void questao5() {
    double numero1, numero2;
    printf("Digite dois numeros reais separados por espaco: ");
    scanf("%lf %lf", &numero1, &numero2);
    printf("Voce digitou: %.2lf e %.2lf\n", numero1, numero2);
}

// 6. Função para ler um número inteiro e imprimir seu antecessor e sucessor.
void questao6() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);
}

// 7. Função para ler o nome, endereço e telefone de um cliente e imprimir esses dados.
void questao7() {
    char nome[100], endereco[100], telefone[15];
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);
    printf("Digite o endereco do cliente: ");
    scanf("%s", endereco);
    printf("Digite o telefone do cliente: ");
    scanf("%s", telefone);
    printf("Dados do cliente:\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);
}

// 8. Função para ler dois números inteiros e imprimir a subtração deles.
void questao8() {
    int numero1, numero2, resultado;
    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &numero1, &numero2);
    resultado = numero1 - numero2;
    printf("A subtracao de %d e %d e igual a %d\n", numero1, numero2, resultado);
}
// 9. Faça um programa em C que leia um número real e imprima ¼ deste número
void questao9() {
    double numero;
    double umQuarto;
    printf("Digite um numero real: ");
    scanf("%lf", &numero);
    umQuarto = numero / 4.0;
    printf("Um quarto de %.2lf e igual a %.2lf\n", numero, umQuarto);
}

// 10. Função para calcular a média aritmética de três números reais.
double questao10(double numero1, double numero2, double numero3) {
    return (numero1 + numero2 + numero3) / 3.0;
}

// 11. Função para calcular as quatro operações básicas entre dois números reais.
void questao11(double numero1, double numero2) {
    double soma = numero1 + numero2;
    double subtracao = numero1 - numero2;
    double multiplicacao = numero1 * numero2;
    double divisao = numero1 / numero2;

    printf("Soma: %.2lf\n", soma);
    printf("Subtracao: %.2lf\n", subtracao);
    printf("Multiplicacao: %.2lf\n", multiplicacao);
    printf("Divisao: %.2lf\n", divisao);
}

// 12. Função para calcular o quadrado de um número real.
double questao12(double numero) {
    return numero * numero;
}

// 13. Função para calcular o novo saldo de uma conta poupança com um reajuste de 2%.
double questao13(double saldo) {
    return saldo * 1.02; // 2% de reajuste
}

// 14. Função para calcular o perímetro e a área de um retângulo.
void questao14(double base, double altura) {
    double perimetro = 2 * (base + altura);
    double area = base * altura;

    printf("Perimetro: %.2lf\n", perimetro);
    printf("Area: %.2lf\n", area);
}

// 15. Função para calcular o valor do desconto e o valor do produto com desconto.
void questao15(double valorProduto, double percentualDesconto) {
    double desconto = (percentualDesconto / 100.0) * valorProduto;
    double valorComDesconto = valorProduto - desconto;

    printf("Valor do Desconto: %.2lf\n", desconto);
    printf("Valor do Produto com Desconto: %.2lf\n", valorComDesconto);
}

// 16. Função para calcular o reajuste do salário de um funcionário.
double questao16(double salarioAtual, double percentualReajuste) {
    return salarioAtual * (1 + (percentualReajuste / 100.0));
}

int main() {
	
	// 1. Faça um programa em C que imprima o seu nome
//    printf("Tarefa 1:\n);
//	  questao1();

	// 2. Faça um programa em C que imprima o produto dos valores inteiros 30 e 27.	
//    printf("Tarefa 2:\n);
//	  questao2();

	//3. Faça um programa em C que imprima a média aritmética entre os números 5, 8, 12.
//    printf("Tarefa 3:\n);
//	  questao3();
		
    // 4. Ler e imprimir um número inteiro.
//   printf("Tarefa 4:\n");
//    questao4();

    // 5. Ler e imprimir dois números reais.
//    printf("\nTarefa 5:\n");
//    questao5();

    // 6. Ler um número inteiro e imprimir seu antecessor e sucessor.
//    printf("\nTarefa 6:\n");
//    questao6();

    // 7. Ler o nome, endereço e telefone de um cliente e imprimir esses dados.
//    printf("\nTarefa 7:\n");
//    questao7();

    // 8. Ler dois números inteiros e imprimir a subtração deles.
//    printf("\nTarefa 8:\n");
//    questao8();
    
    // 9. Faça um programa em C que leia um número real e imprima ¼ deste número
//    printf("\nTarefa 9:\n");
//    questao9();

	// 10. Calcular a média aritmética de três números reais.
//    printf("Tarefa 10:\n");
//    double media = questao10(10.0, 15.5, 20.2);
//    printf("Média Aritmética: %.2lf\n", media);

    // 11. Calcular as quatro operações básicas entre dois números reais.
//    printf("\nTarefa 11:\n");
//    questao11(25.0, 5.0);

    // 12. Calcular o quadrado de um número real.
//    printf("\nTarefa 12:\n");
//    double quadrado = questao12(8.0);
//    printf("Quadrado: %.2lf\n", quadrado);

    // 13. Calcular o novo saldo de uma conta poupança com reajuste de 2%.
//    printf("\nTarefa 13:\n");
//    double novoSaldo = questao13(1000.0);
//   printf("Novo Saldo: %.2lf\n", novoSaldo);

    // 14. Calcular o perímetro e a área de um retângulo.
//    printf("\nTarefa 14:\n");
//    questao14(5.0, 8.0);

    // 15. Calcular o valor do desconto e o valor do produto com desconto.
//    printf("\nTarefa 15:\n");
//    questao15(200.0, 10.0);

    // 16. Calcular o reajuste do salário de um funcionário.
//    printf("\nTarefa 16:\n");
//    double novoSalario = questao16(2000.0, 5.0);
//    printf("Novo Salário: %.2lf\n", novoSalario);

    
}



