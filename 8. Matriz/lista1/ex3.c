#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamL 3
#define tamC 2

int main(int argc, char** argv)
{
	
	int matr[tamL][tamC];
	int i, j, num;
	
	srand(time(NULL));
	
	for(i=0; i<tamL; i++) {
		for(j = 0; j<tamC; j++) {
			printf("[%i, %i]: ", i, j);
			scanf("%i", &num);
			matr[i][j] = num;
		}
	}
	
	// 3 7 
	// 1 8
	// 4 1
	
	for(i=0; i<tamC; i++) { // 0 - 1
		for(j=0; j<tamL; j++) { // 0 - 2
			printf("%i ", matr[j][i]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}