#include <stdio.h>

void temperaturas(float);

int main()
{
	
	float tempF;
	
	printf("Insira a temperatura em celsius: ");
	scanf("%f", &tempF);

	temperaturas(tempF);
		
	return 0;
}

void temperaturas(float farenheit) {
	float celsius = 5 * (farenheit -32)/9;
	printf("Em celsius: %.2f. Em farenheit: %.2f", celsius, farenheit);
}