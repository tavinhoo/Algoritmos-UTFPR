#include <stdio.h>
#define tam 6

int main(int argc, char** argv)
{
 
    int vect[tam], reverseVect[tam];
    int num, i;
    
    for(i=tam-1;i>=0;i--) {
		
		printf("Insira um valor: ");
		scanf("%i", &num);
		
		vect[i] = num;
	}
	
	for(i=0;i<tam;i++) {
		printf("%i", vect[i]);
	}
		
	return 0;
}