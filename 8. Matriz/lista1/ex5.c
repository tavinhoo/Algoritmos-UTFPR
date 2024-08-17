#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3

int main(int argc, char** argv)
{
	
	int matr[tam][tam], matr1[tam][tam], matResult[tam][tam];
	int matrExib[3][3][3];
	
	// int matrExib[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}, {{19, 20 ,21}, {22, 23, 24}, {25, 26, 27}}};
	
	int i, j, k;
	
	srand(time(NULL));
	
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++) {
			matr[i][j] = rand() % 30;
		}
	}
	
	for(i=0; i<tam; i++) {
		for(j = 0; j<tam; j++) {
			matr1[i][j] = rand() % 30;
		}
	}
		
	for(i=0; i<tam; i++) {
		for(j=0; j<tam; j++) {
			matResult[i][j] = matr[i][j] * matr1[i][j];
		}
	}
	
	for(i=0; i<3; i++) {
		for(j=0; j<3;j++) {
			for(k=0; k<3; k++) {

				if(i == 0) {
					matrExib[0][j][k] = matr[j][k];
				}
				
				if(i == 1) {
					matrExib[1][j][k] = matr1[j][k];
				}
				
				if(i == 2) {
					matrExib[2][j][k] = matResult[j][k];
				}							
			}
		}
	}
	
	for(i=0; i<3; i++) {
		for(j=0; j<3;j++) {
			for(k=0; k<3; k++) {
				printf("%i ", matrExib[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}