#include <stdio.h>
#include <locale.h>
#include <math.h>

float calc(int, int, int);

int main(int argc, char** argv)
{
	int opcao, n1, n2;
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		printf("Op��o: \n");
		printf("1 - Soma\n");
		printf("2 - Subtra��o\n");
		printf("3 - Divis�o\n");
		printf("4 - Multiplica��o\n");
		printf("5 - Sair\n");
		
		printf("Selecione uma op��o: ");
		scanf("%i", &opcao);
		
		printf("Insira n1: ");
		scanf("%i", &n1);
		
		printf("Insira n2: ");
		scanf("%i", &n2);
		
		printf("RESULTADO %.2f\n", calc(opcao, n1, n2));
		
	} while(opcao != 5);
	
	return 0;
}

float calc(int opcao, int n1, int n2) {
	switch(opcao)
	{
	case 1:
		return (float)n1 + n2;
		break;
	case 2:
		return (float)n1 - n2;
		break;
	case 3:
		return (float)n1 / n2;
		break;
	case 4:
		return (float)n1 * n2;
		break;
	default:
		printf("Opcao Invalida");
		return -1;
		break;
	}	
}