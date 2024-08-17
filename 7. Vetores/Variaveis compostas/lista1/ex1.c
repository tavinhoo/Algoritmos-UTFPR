#include <stdio.h>
#define tam 6

int main(int argc, char** argv)
{
	
	int nums[tam];
	int i;
	
	for(i=0; i<tam; i++) {
		printf("Insira um valor:  ");
		scanf("%i", &nums[i]);
		
		printf("Valor inserido: %i\n", nums[i]);
	}
	return 0;
}