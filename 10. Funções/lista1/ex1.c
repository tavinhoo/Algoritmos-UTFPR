#include <stdio.h>

float farenheit(float);

int main()
{
	
	float tempC, tempF;
	
	printf("Insira a temperatura em celsius: ");
	scanf("%f", &tempC);
	
	tempF = farenheit(tempC);
	
	printf("A temperatura em Farenheit:  %.2f", tempF);
		
	return 0;
}

float farenheit(float celsius) {
	float tempFarenheit = 9 * celsius / 5 + 32;
	return tempFarenheit;
}