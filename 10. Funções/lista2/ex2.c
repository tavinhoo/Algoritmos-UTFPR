#include <stdio.h>
#include <locale.h>

void identificaFigura(int);

int main(int argc, char** argv)
{
	
	int qtdLados;
	
	printf("Insira a quantidade de lados: ");
	scanf("%i", &qtdLados);
	
	identificaFigura(qtdLados);
	
	return 0;
}

void identificaFigura(int qtdL) {
	if(qtdL == 3) {
		printf("UM POL�GONO DE 3 LADOS � UM TRI�NGULO");
	}
	
	if(qtdL == 4) {
		printf("UM POL�GONO DE 4 LADOS � UM QUADRADO");
	}
	
	if(qtdL == 5) {
		printf("UM POL�GONO DE 5 LADOS � UM PENT�GONO")
	}
}
