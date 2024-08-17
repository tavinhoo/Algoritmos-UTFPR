#include <stdio.h>
#include <locale.h>

void pais();
void estado();
void universidade();
void disciplinaSemestre();
void valorInvalido();

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	do {
		printf("\n--------------------\n");
		printf("1 - NOME DO PA�S\n");
		printf("2 - NOME DO ESTADO\n");
		printf("3 - SIGLA UNIVERSIDADE\n");
		printf("4 - NOME DO PA�S\n");
		
		printf("Sua op��o: ");
		scanf("%i", &opcao);
		
		printf("\n");
		
		switch(opcao) {
			case 1:
				pais();
				break;
			case 2:
				estado();
				break;
			case 3:
				universidade();
				break;
			case 4:
				disciplinaSemestre();
				break;
			default:
				valorInvalido();
				break;
		}
	} while(opcao != -1);
	
	return 0;
}

void pais() {
	printf("Brasil");
}

void estado() {
	printf("Paran�");
}

void universidade() {
	printf("UTFPR - CP");
}

void disciplinaSemestre() {
	printf("AS61B-2024/1");
}

void valorInvalido() {
	printf("Valor inv�lido. Informa uma op��o entre 1 e 4");
}