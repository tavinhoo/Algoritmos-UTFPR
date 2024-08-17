#include <stdio.h>
#include <stdlib.h>
#define tam 8

int main(int argc, char** argv)
{
	int i, num, vect[tam];
	
	srand(time(NULL));
	
	for(i = 0; i<tam;) {
		
		num = rand() % 21;
		
		if(num % 2 == 0) {
			vect[i] = num;
			 i++;
		}
	}

	for(i = 0; i<tam; i++ ) {
		printf("%i ", vect[i]);
	}

	return 0;
}