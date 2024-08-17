#include <stdio.h>
#include <locale.h>
#include <math.h>

int paridade(int);

int main(int argc, char** argv)
{
	
	setlocale(LC_ALL, "Portuguese");
	int valor;

	printf("Insira um valor: ");
	scanf("%i", &valor);
	
	mensagem(paridade(valor));
	
	
	return 0;
}

int paridade(int value) {
	if(value % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

void mensagem(int resposta) {
	if(resposta == 1) {
		printf("É PAR");
	} else {
		printf("É IMPAR");
	}
}