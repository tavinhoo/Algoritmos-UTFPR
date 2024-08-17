#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <locale.h>

struct dvd {
	int prateleira;
	char titulo[50];
	int duracao;
};

int main()
{

	char titulo[50];
	int duracao, prateleira;
	
	struct dvd filme1;

	setlocale(LC_ALL, "Portuguese");
		
	printf("Insira o titulo: ");
	gets(titulo);
	
	fflush(stdin);
	
	printf("Insira o numero da prateleira: ");
	scanf("%i", &prateleira);
			
	printf("Insira a duração: ");
	scanf("%i", &duracao);
	
	strcpy(filme1.titulo, titulo);
	filme1.prateleira = prateleira;
	filme1.duracao = duracao;
	
	printf("TITULO: %s\n", filme1.titulo);
	printf("PRATELEIRA: N%i\n", filme1.prateleira);
	printf("DURACAO: %i min\n", filme1.duracao);
	
	
	return 0;
}