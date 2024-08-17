#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main(int argc, char** argv)
{
 
    int vect[tam];
    int num, i, proximo;
    
    float media = 0, menorResult = 0;
    
    for(i = 0; i<tam; i++) {
		
		printf("Insira um numero: ");
		scanf("%i", &num);
		
		vect[i] = num;
	}
	
	for(i = 0; i<tam; i++) {
		media += vect[i];
	}
    
    media /= (float)tam;

    for(i = 0; i<tam; i++) {
    	
    	if(i == 0) {
			menorResult = (float)media - vect[0];	
		}
    	 
		if(abs(media-vect[i]) < menorResult){
			menorResult = abs(media<vect[i]);
			proximo = vect[i];
		}		
	}
	
	printf("Media: %.2f\n", media);
	printf("Mais proximo da media: %i", proximo);
    
	return 0;
}