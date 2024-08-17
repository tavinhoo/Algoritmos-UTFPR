#include <stdio.h>
#include <stdlib.h>
#define tam 8

int main(int argc, char** argv)
{
	int i, num, vect[tam];
	int pos, encontrado = 0;
	srand(time(NULL));
	
	for(i = 0; i<tam; i++ ) {
		vect[i] = rand() % 11;	
	}
	
	printf("Insira um numero para buscar: ");
	scanf("%i", &num);

	for(i=0; i<tam; i++) {
		if(num == vect[i]) {
			pos = i;
			encontrado = 1;
		}
	}	
	
	if(encontrado == 1) {
		printf("ENCONTRADO -> POS[%i]", pos);
	} else {
		printf("Não existe!");
	}
	
	return 0;
}