#include <stdio.h>

void media(float, float);

int main()
{
	
	float n1, n2;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
		
	media(n1, n2);
	
	return 0;
}

void media(float n1, float n2) {
	float media = (n1 + n2)/2.0;
	printf("Sua media: %.2f", media);
}