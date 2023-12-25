#include <stdio.h>
#include <stdlib.h>

struct Produto {
    char nome[50];
    int codigo;
    float preco;
};

int main() {
 
    struct Produto *estoque;
	estoque = (struct Produto *)malloc(10 * sizeof(struct Produto));
	
	if (estoque == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    snprintf(estoque[0].nome, sizeof(estoque[0].nome), "Pe de Moleque");
    estoque[0].codigo = 13205;
    estoque[0].preco = 0.20;

    snprintf(estoque[1].nome, sizeof(estoque[1].nome), "Cocada Baiana");
    estoque[1].codigo = 15202;
    estoque[1].preco = 0.50;

    for (int i = 0; i < 2; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Codigo: %d\n", estoque[i].codigo);
        printf("Preco: R$%.2f\n", estoque[i].preco);
        printf("\n");
    }

}

