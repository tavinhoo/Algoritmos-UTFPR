#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 20

int main(int argc, char** argv)
{
	int i, j, vect[tam], num;
	
	int encontrado, qtdMultCinco = 0, multCinco = 0;
	
	srand(time(NULL));
		
	for(i = 0; i<tam;) {
		
		num = rand() % 101;
		encontrado = 0;
		
		for(j = 0; j<tam; j++) {
			if(vect[j] == num) {
				encontrado = 1;
			}
		}
		
		if(encontrado != 1) {
			if(num % 2 == 1) {
				vect[i] = num;
				i++;
			}
		}
	}
	
	
	for(j=0; j<tam; j++) {
		if(vect[j] % 5 == 0) {
			qtdMultCinco++;
		}
	}
	
	if(qtdMultCinco > 0) {
		printf("qtd multiplos de cinco: %i\n", qtdMultCinco);
	}
	
	printf("Multiplos de cinco: ");
	
	for(j=0; j<tam; j++) {
		if(vect[j] % 5 == 0) {
			printf("%i ", vect[j]);
		}
	}
	
	printf("\nValores em posicoes pares: ");
	
	for(j=0; j<tam; j++) {
		if(j % 2 == 0) {
			printf("%i ", vect[j]);
		}
	}
	
	printf("\nVetor original: ");
	
	for(j=0; j<tam; j++) {
		printf("%i ", vect[j]);
	}
	
	
	
	
	
	
		
	return 0;
}