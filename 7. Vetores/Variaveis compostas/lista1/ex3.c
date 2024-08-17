#include <stdio.h>
#define tam 6

int main(int argc, char** argv)
{
 
    int vect[tam];
    int num, i, maior = 0;
	
	for(i=0; i<tam;i++) {
		
		printf("Insira um valor: ");
		scanf("%i", &num);
	
		if(num > maior) maior = num;	  	
	}
	
	printf("O maior valor inserido no vetor: %i", maior);
	
	return 0;
}