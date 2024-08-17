#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct cliente {
	int codigo;
	char nome[30];
	char endereco[90];
};

int main()
{
	int codigo;
	char nome[30];
	char endereco[90];
	
	struct cliente c1;

	printf("Insira o codigo: ");
	scanf("%i", &codigo);
	
	fflush(stdin);
	
	printf("Insira seu nome: ");
	scanf("%s", &nome);

	printf("Insira seu endereco: ");
	scanf("%s", &endereco);
	
	c1.codigo = codigo;
	strcpy(c1.nome, nome);
	strcpy(c1.endereco, endereco);
	
	printf("CODIGO: %i\n", c1.codigo);
	printf("NOME: %s\n", c1.nome);
	printf("ENDERECO: %s\n", c1.endereco);
	
	return 0;
}