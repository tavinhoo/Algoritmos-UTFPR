#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main(int argc, char** argv)
{
 
    int vect[tam];
    int num, i, j, aux;
    
    for(i = 0; i<tam; i++) {
		
		printf("Insira um numero: ");
		scanf("%i", &num);
		
		vect[i] = num;
	}
	
	for(i=0; i<tam; i++) {
		for(j=0; j<tam; j++) {
			if(vect[j] > vect[i]) {
				aux = vect[j];
				vect[j] = vect[i];
				vect[i] = aux;	
			}
		}
	}
	
	 for(i = 0; i<tam; i++) {
		printf("%i ", vect[i]);
	}
	
	return 0;
}