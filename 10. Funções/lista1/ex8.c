#include <stdio.h>
#include <locale.h>

void parOuImpar(int);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Insira um numero: ");
	scanf("%i", &n1);
	
	printf("Insira outro numero: ");
	scanf("%i", &n2);
	
	maior(n1, n2);
	
	return 0;
}

void maior(int n1, int n2) {
	if(n1 > n2) {
		printf("MAIOR: %i", n1);
	} else if(n1 < n2){
		printf("MAIOR: %i", n2);
	} else {
		printf("SÃO IGUAIS");
	}
}