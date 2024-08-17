#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3

int main(int argc, char** argv)
{
	
	float matr[tam][tam];
	int i, j;
	
	srand(time(NULL));
		
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++) {
			matr[i][j] = (float)rand()/30;
		}
	}
	
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++) {
			printf("%.2f ", matr[i][j]);
		}
		printf("\n");
	}

	return 0;
}