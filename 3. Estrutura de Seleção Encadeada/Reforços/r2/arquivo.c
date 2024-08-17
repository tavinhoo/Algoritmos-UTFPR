#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	/*
	// Exerc�cio 1

	int idade, opcao;

	printf("Insira sua idade: ");
	scanf("%i", &idade);

	if(idade >= 18) {
		printf("[1] - Carro\n[2] - Moto\nOp��o: ");
		scanf("%i", &opcao);
		switch(opcao)
		{
		case 1:
			printf("muito bom! Viajar requer espa�o para mala!");
			break;
		case 2:
			printf("Um Lobo Solit�rio n�o precisa de mala para atravessar o pa�s!");
			break;
		default:
			break;
		}
	} else {
		printf("Digite 1 para suco ou 2 para refrigerante: ");
		scanf("%i", opcao);
		switch(opcao)
		{
		case 1:
			printf("muito bom! Suco � saud�vel!");
			break;
		case 2:
			printf("refrigerante � refrescante e combina com pipoca!");
			break;
		default:
			break;
		}
	}

	printf("At� breve!");
	*/

	// Exerc�cio 2
	/*
	int np1, np2;

	printf("Jogador 1: ");
	scanf("%i", &np1);

	printf("Jogador 2: ");
	scanf("%i", &np2);

	if(np1 == np2) {
		printf("Voc� acertou!");
	} else {
		printf("%i", abs(np1 - np2));
	}
	*/

	// Exerc�cio 3 - 4

	/*
	int medida, qtdlados;
	float area;

	printf("Inisra a quantidade de lados: ");
	scanf("%i", &qtdlados);

	printf("Insira a medida dos lados: ");
	scanf("%i", &medida);

	if(nlados < 3) {
		printf("N�o � um pol�gono!");
	} else if(nlados == 3) {
		area = (pow(medida, 2,0) * sqrt(3)) / 4;
		printf("� um tri�ngulo! �rea : %.2f");
	} else if(nlados = 4) {
		area = pow(medida, 2.0);
		printf("� um quadril�tero! �rea : %.2f");
	} else if(nlados == 5) {
		printf("� um p�ntagono!"));
	} else {
		printf("Pol�gono n�o identificado");
	}
	*/

	// Exerc�cio 5

	/*
	float preco;
	int qtdmacas;

	printf("Quantas ma��s voc� vai comprar? ");
	scanf("%i", &qtdmacas);

	if(qtdmacas >= 12) {
		preco = qtdmacas * 2.0;
	} else {
		preco = qtdmacas * 2.3;
	}

	printf("Por %i ma��s voc� pagar�: R$ %.2f", qtdmacas, preco);
	*/

	// Exerc�cio 6
	/*
	int x, y, aux;
	printf("Insira o valor de x: ");
	scanf("%i", &x);
	printf("Insira o valor de y: ");
	scanf("%i", &y);

	if(x > y) {
		aux = x;
		x = y;
		y = aux;
	}

	printf("X: %i, Y: %i", x, y);
	*/

	// Exerc�cio 7

	int x, y, z, aux1;
	printf("Insira o valor de x: ");
	scanf("%i", &x);
	printf("Insira o valor de y: ");
	scanf("%i", &y);
	printf("Insira o valor de z: ");
	scanf("%i", &z);

	if (x > y && x > z)
	{
		if (y > z)
		{
			aux1 = z;
			z = x;
			x = aux1;
		}
		else
		{
			// x > z > y  -> x, y, z
			aux1 = y;
			y = z;
			z = x;
			x = aux1;
		}
	}
	else if (x > y && x < z)
	{
		// y < x < z
		aux1 = y;
		y = x;
		x = aux1;
	}
	else if (x < y && x > z)
	{
		// y > x > z  z, x, y
		aux1 = x;
		x = z;
		z = y;
		y = aux1;
	}
	else if (x < y && x < z)
	{
		// x < y e x < z
		if (y > z)
		{
			aux1 = z;
			z = y;
			y = aux1;
		}
	}
	else if (x == y)
	{
		if (z < x)
		{
			aux1 = z;
			z = x;
			x = aux1;
		}
	}
	else if (x == z)
	{
		if (z < y)
		{
			aux1 = z;
			z = y;
			y = aux1;
		}
	}

	printf("X: %i | Y: %i | Z: %i", x, y, z);

	return 0;
}
