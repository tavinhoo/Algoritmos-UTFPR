#include <stdio.h>
#define tam 8

int main(int argc, char** argv)
{
	int i, num, vect[tam];
	
	for(i = 0; i<tam; i++) {
		printf("Insira um valor POS[%i]: ", i+1);
		scanf("%i", &vect[i]);
	}
	
	for(i = 0; i<tam; i++) {
		printf("%i ", vect[i]);
	}
	
	return 0;
}