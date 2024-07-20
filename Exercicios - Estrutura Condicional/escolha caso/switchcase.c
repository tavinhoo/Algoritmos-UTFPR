#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	/*
	
	// Exercício 1
	
	int opcao;
	
	printf("[1] - Zikachu\n[2] - Zulbassauro\n[3] - Zharmander\n");
	printf("Insira uma opção: ");
	scanf("%i", &opcao);
	
	switch(opcao)
	{
	case 1:
		printf("Monstrinho elétrico da categoria rato!");
		break;
	case 2:
		printf("Monstrinho de grama da categoria semente!");
		break;
	case 3:
		printf("Monstrinho de fogo da categoria lagarto!");
		break;	
    default:
    	printf("Monstrinho não cadastrado. Há 8900 monstros! Temos que pegar!");
		break;
	}
	*/
	
	// Exercício 2
	
	/*
	char opcao;
	
	printf("[A] - Avião\n[B] - Carro\n[C] - Cruzeiro\n");
	printf("Insira uma opcão: ");
	scanf("%c", &opcao);
	
	switch(opcao)
	{
	case 'A':
		printf("É mais rápido!");
		break;
	case 'B':
		printf("“É mais barato!");
		break;
	case 'C':
		printf("É mais bonito!");
		break;	
    default:
    	printf("Não existe essa opção!");
		break;
	}
	*/
	
	// Exercício 3
	int opcao;
	
	printf("[1] - Calcular a área de um retângulo\n[2] - Calcular a área de um círculo\n[3] - -Calcular a área de um triângulo\n");
	
	switch(opcao)
	{
	case 1:
		float base, altura;
		printf("Insira base:");
		scanf("%f", &base);
		printf("Insira altura:");
		scanf("%f", &altura);
		float areaRetangulo = base * altura;
		printf("A área do retângulo é: %.2f", areaRetangulo);
		break;
	case 2:
		float raio;
		printf("Insira o raio:");
		scanf("%f", &raio);
		float areaCirculo = M_PI * pow(raio, 2.0);
		printf("A área do círculo é: %.2f", areaCirculo);
		break;
	case 3:
		float base, altura;
		printf("Insira a base:");
		scanf("%f", &base);
		printf("Insira a altura:");
		scanf("%f", &altura);
		float areaTraingulo = (base * altura)/2.0;
		printf("A área do triângulo é: %.2f", areaTraingulo);
		break;	
    default:
    	printf("Não existe essa opção!");
		break;
	}
	
	// Exercício 4
	
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
		printf("Março");
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
    	printf("Mês inválido!");
		break;
	}
	
	return 0;
	
}