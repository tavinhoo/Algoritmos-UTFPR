#include <stdio.h>
#include <locale.h>

void parOuImpar(int);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int inteiro;
	
	printf("Insira um numero inteiro: ");
	scanf("%i", &inteiro);
	
	parOuImpar(inteiro);
	
	return 0;
}

void parOuImpar(int num) {
	if(num % 2 == 0) {
		printf("Este numero é par!");
	} else {
		printf("Este numero é impar!");
	}
}