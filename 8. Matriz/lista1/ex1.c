#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 2

int main(int argc, char** argv)
{
	
	int matr[tam][tam], i, j;
	
	srand(time(NULL));
		
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++) {
			matr[i][j] = rand() % 31;
		}
	}
	
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++) {
			printf("%i ", matr[i][j]);
		}
		printf("\n");
	}

	return 0;
}