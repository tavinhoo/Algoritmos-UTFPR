#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main(int argc, char** argv)
{
	int i, j, num, vect[tam], encontrado, numBusca, pos;
	
	srand(time(NULL));
	
	for(i = 0; i<tam;) {
		
		num = rand() % 21;
		encontrado = 0;
		
		for(j = 0; j<tam; j++) {
			if(vect[j] == num) {
				encontrado = 1;
			}
		}
		
		if(encontrado != 1) {
			vect[i] = num;
			i++;
		}
	}

	pos = -1;
	
	printf("Insira um numero para buscar: ");
	scanf("%i", &numBusca);

	for(i = 0; i<tam; i++) {
		if(vect[i] == numBusca) {
			pos = i;
		}
	}
	
	if(pos != -1) {
		printf("Encontrado POS[%i]", pos);
	} else {
		printf("Não encontrado!");
	}
	
	return 0;
}