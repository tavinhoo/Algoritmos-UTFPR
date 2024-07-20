#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	/*
	
	// Exerc�cio 1
	
	int opcao;
	
	printf("[1] - Zikachu\n[2] - Zulbassauro\n[3] - Zharmander\n");
	printf("Insira uma op��o: ");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
	case 1:
		printf("Monstrinho el�trico da categoria rato!");
		break;
	case 2:
		printf("Monstrinho de grama da categoria semente!");
		break;
	case 3:
		printf("Monstrinho de fogo da categoria lagarto!");
		break;	
    default:
    	printf("Monstrinho n�o cadastrado. H� 8900 monstros! Temos que pegar!");
		break;
	}
	*/
	
	// Exerc�cio 2
	
	/*
	char opcao;
	
	printf("[A] - Avi�o\n[B] - Carro\n[C] - Cruzeiro\n");
	printf("Insira uma opc�o: ");
	scanf("%c", &opcao);
	
	switch(opcao)
	{
	case 'A':
		printf("� mais r�pido!");
		break;
	case 'B':
		printf("�� mais barato!");
		break;
	case 'C':
		printf("� mais bonito!");
		break;	
    default:
    	printf("N�o existe essa op��o!");
		break;
	}
	*/
	
	// Exerc�cio 3
	int opcao;
	
	printf("[1] - Calcular a �rea de um ret�ngulo\n[2] - Calcular a �rea de um c�rculo\n[3] - -Calcular a �rea de um tri�ngulo\n");
	
	switch(opcao)
	{
	case 1:
		float base, altura;
		printf("Insira base:");
		scanf("%f", &base);
		printf("Insira altura:");
		scanf("%f", &altura);
		float areaRetangulo = base * altura;
		printf("A �rea do ret�ngulo �: %.2f", areaRetangulo);
		break;
	case 2:
		float raio;
		printf("Insira o raio:");
		scanf("%f", &raio);
		float areaCirculo = M_PI * pow(raio, 2.0);
		printf("A �rea do c�rculo �: %.2f", areaCirculo);
		break;
	case 3:
		float base, altura;
		printf("Insira a base:");
		scanf("%f", &base);
		printf("Insira a altura:");
		scanf("%f", &altura);
		float areaTraingulo = (base * altura)/2.0;
		printf("A �rea do tri�ngulo �: %.2f", areaTraingulo);
		break;	
    default:
    	printf("N�o existe essa op��o!");
		break;
	}
	
	// Exerc�cio 4
	
	printf("Insira uma opcao: ");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
	case 1:
		printf("Janeiro!");
		break;
	case 2:
		printf("Fevereiro");
		break;
	case 3:
		printf("Mar�o");
		break;
	case 4:
		printf("Abril");
		break;
	case 5:
		printf("Maio");
		break;
	case 6:
		printf("Junho");
		break;
	case 7:
		printf("Julho");
		break;
	case 8:
		printf("Agosto");
		break;
	case 9:
		printf("Setembro");
		break;
	case 10:
		printf("Outubro");
		break;
	case 11:
		printf("Novembro");
		break;
	case 12:
		printf("Dezembro");
		break;		
    default:
    	printf("M�s inv�lido!");
		break;
	}
	
	return 0;
	
}