#include <stdio.h>
#include <math.h>

void paridade(int);

int main(int argc, char** argv)
{
	int i, num;
	
	for(i = 0; i<10; i++) {
		printf("Insira um numero: ");
		scanf("%i", &num);
		absoluto(num);
	}
	return 0;
}

void absoluto(int num) {
	printf("Valor abs:  %i\n", abs(num));
}