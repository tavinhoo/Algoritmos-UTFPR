#include <stdio.h>
#include <stdlib.h>
#define tam 20

int main(int argc, char** argv)
{
	int i, num, vect[tam], pos, maior = 0;
	
	srand(time(NULL));
	
	for(i = 0; i<tam; i++) {
		
		vect[i] = rand();
		if(vect[i] > maior) {
			maior = vect[i];
			pos = i;
		}
	}
	
	printf("Maior elemento: %i POS[%i]", maior, pos);
	
	return 0;
}