#include <stdio.h>

void temperaturas(float);

int main()
{
	
	float tempC;
	
	printf("Insira a temperatura em celsius: ");
	scanf("%f", &tempC);

	temperaturas(tempC);
		
	return 0;
}

void temperaturas(float celsius) {
	float farenheit = 9 * celsius / 5 + 32;
	printf("Em celsius: %.2f. Em farenheit: %.2f", celsius, farenheit);
}