#include <stdio.h>

void valores();

int main(int argc, char** argv)
{
	valores();

	return 0;
}

void valores() {

	int i, value;
	int menor, maior;
	
	for(i = 0; i<4; i++)	 {
		
		printf("Insira n%i: ", i+1);
		scanf("%i", &value);
		
		if(i == 0) {
			menor = value; 
			maior = value;
		}
		
		if(maior < value) {
			maior = value;
		}
		
		if(menor > value) {
			menor = value;
		}	
	}
	
	printf("MAIOR: %i\n", maior);
	printf("MENOR: %i\n", menor);	
}