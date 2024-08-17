#include <stdio.h>
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
	
	for(i=0; i<tam/2;) {
		for(j=tam-1; j>i; j--) {
			
			aux = vect[i]; 
			vect[i] = vect[j]; 
			vect[j] = aux; 
			
			i++;
		}
	}
	
	 for(i = 0; i<tam; i++) {
		printf("%i ", vect[i]);
	}
	
	return 0;
}

