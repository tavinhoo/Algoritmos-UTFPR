#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main(int argc, char** argv)
{
	int i, num, vect[tam], menores = 0;
	
	srand(time(NULL));
	
	for(i = 0; i<tam; i++) {
		vect[i] = rand() % 100;
		if(vect[i] < 10) {
			menores++;
		}
	}
	
	printf("QTD DE MENORES QUE 10: %i", menores);
	
	return 0;
}