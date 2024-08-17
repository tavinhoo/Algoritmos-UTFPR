#include <stdio.h>

void paridade(int);

int main(int argc, char** argv)
{
	paridade(15);
	paridade(20);
	paridade(-1432543);
	paridade(15423425);
	
	
	return 0;
}

void paridade(int num) {
	if(num % 2 == 0) {
		printf("Valor par.\n");
	} else {
		printf("Valor impar.\n");
	}
}
