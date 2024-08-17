#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 100

int main(int argc, char** argv)
{
	int i, j, vect[tam];
	
	srand(time(NULL));
		
	for(i = 0; i<tam; i++) {
		if(i % 2 == 0) {
			vect[i] = 1;
		} else {
			vect[i] = 0;
		}
	}

	for(i = 0; i<tam; i++) {
		printf("%i ", vect[i]);
	}
		
	return 0;
}