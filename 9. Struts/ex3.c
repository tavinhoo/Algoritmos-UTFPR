#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <locale.h>

struct produto {
	int codigo;
	char desc[100];
	char marca[50];
	float preco;
};

int main()
{

	int cod;
	char marca[50];
	char desc[100];
	float preco;
	
	struct produto produto1;

	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o código do produto: ");
	scanf("%i", &cod);
	
	fflush(stdin);
		
	printf("Insira a descrição do produto: ");
	gets(desc);
	
	printf("Insira a marca do produto: ");
	gets(marca);
	
	fflush(stdin);
	
	printf("Insira o preço: ");
	scanf("%f", &preco);
	
	produto1.codigo = cod;			
	strcpy(produto1.desc, desc);
	strcpy(produto1.marca, marca);
	produto1.preco = preco;
	
	printf("CODIGO: %i\n", produto1.codigo);
	printf("DESCRIÇÃO: %s\n", produto1.desc);
	printf("MARCA: %s\n", produto1.marca);
	printf("PRECO: %.2f R$\n", produto1.preco);
	
	return 0;
}