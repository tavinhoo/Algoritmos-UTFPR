#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamL 2
#define tamC 3

int main(int argc, char** argv)
{
	
	int matr[tamL][tamC];
	int i, j, num, somaL;
	
	srand(time(NULL));
	
	for(i=0; i<tamL; i++) {
		for(j = 0; j<tamC; j++) {
			printf("[%i, %i]: ", i, j);
			scanf("%i", &num);
			matr[i][j] = num;
		}
	}
	
	for(i=0; i<tamL; i++) {
		somaL = 0;
		for(j=0; j<tamC; j++) {
			somaL += matr[i][j];
		}
		printf("Soma da linha: %i\n", somaL);
	}
	
	return 0;
}