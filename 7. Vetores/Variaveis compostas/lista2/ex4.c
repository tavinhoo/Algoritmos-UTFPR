#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main(int argc, char** argv)
{
	int i, num, vect1[tam], vect2[tam], soma;
	
	srand(time(NULL));
	
	for(i = 0; i<tam; i++) {
		
		num = rand() % 11;
		
		vect1[i] = num;
		vect2[i] = num;
	}
	
	for(i = 0; i<tam; i++) {
		
		soma = vect1[i] + vect2[i];
		printf("[%i] + [%i] = [%i]\n", vect1[i], vect2[i], soma);

	}
	
	return 0;
}