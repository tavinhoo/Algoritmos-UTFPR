#include <stdio.h>
#define tam 6

int main(int argc, char** argv)
{
 
    int vect[tam], reverseVect[tam];
    int num, i;
    
    for(i=0;i<tam;i++) {
		
		printf("Insira um valor: ");
		scanf("%i", &num);
		
		vect[i] = num;
		reverseVect[tam-i-1] = num;
	}

	printf("Vect = ");
	for(i = 0; i<tam; i++) {
		printf("%i", vect[i]);
	}
	
	printf("\n");
	
	printf("ReverseVect = ");
	for(i = 0; i<tam; i++) {
		printf("%i", reverseVect[i]);
	}
	
	
	
	return 0;
}