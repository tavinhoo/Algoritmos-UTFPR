#include <stdio.h>
#define tam 6

int main(int argc, char** argv)
{
 
    int vect[tam];
    int num, i, menor = 0;
	
	for(i=0; i<tam;i++) {
		
		printf("Insira um valor: ");
		scanf("%i", &num);
		
		if(i == 0) {
			menor = num;
		}
	
		if(num < menor) menor = num;	  	
	}
	
	printf("O menor valor inserido no vetor: %i", menor);
	
	return 0;
}