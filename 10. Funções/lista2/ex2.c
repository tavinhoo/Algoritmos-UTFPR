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
		printf("UM POLÍGONO DE 3 LADOS É UM TRIÂNGULO");
	}
	
	if(qtdL == 4) {
		printf("UM POLÍGONO DE 4 LADOS É UM QUADRADO");
	}
	
	if(qtdL == 5) {
		printf("UM POLÍGONO DE 5 LADOS É UM PENTÁGONO")
	}
}
