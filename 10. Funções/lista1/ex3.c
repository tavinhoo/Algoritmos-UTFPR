#include <stdio.h>

float celsius(float);

int main()
{
	
	float tempF, tempC;
	
	printf("Insira a temperatura em farenheit: ");
	scanf("%f", &tempF);

	tempC = celsius(tempF);
	
	printf("A temperatura em Celsius:  %.2f", tempC);
		
	return 0;
}

float celsius(float farenheit) {
	float celsius = 5 * (farenheit-32)/9;
	return celsius;
}