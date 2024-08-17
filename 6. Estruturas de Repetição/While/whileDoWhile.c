#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	
	// int senhaDigitada;
	// 
	// printf("Insira sua senha: ");
	// scanf("%f", &senhaDigitada);
	// 
	// while(senhaDigitada != 123456) {
	// 	
	// 	printf("Senha inválida. Tente novamente\n");
	// 	
	// 	printf("Insira sua senha: ");
	// 	scanf("%d", &senhaDigitada);
	// 	
	// }
	// 
	// printf("Senha correta. Seja bem vindo!");
	
	// Exercício 2
	
	// int nDigitado;
	// 
	// printf("Insira um valor entre 1 e 6: ");
	// scanf("%f", &nDigitado);
	// 
	// while(nDigitado < 1 || nDigitado > 6) {
	// 	printf("Valor inválido. Tente novamente!\n");
	// 	printf("Insira um valor entre 1 e 6: ");
	// 	scanf("%f", &nDigitado);
	// }
	// 
	
		// Exercício 3
		
		// int numero = 1;
		// 
		// while(numero < 7) {
		// 	printf("%i\n", numero);
		// 	numero++;
		// }
		
	// Exercício 4
		
		// int pv1, pv2;
		// 
		// printf("P1 insira um numero: ");
		// scanf("%i", &pv1);
		// 
		// do {
		// 	printf("P2 insira um numero: ");
		// 	scanf("%i", &pv2);	
		// } while(pv2 != pv1);
		// 
		// printf("Parabens, voce acertou!");
		
		
	// Exercício 5
	
	
	// int opcao;
	// 
	// do {
	// 	printf("Escolha uma opção: \n");
	// 	printf("1 - Dizer Oi!\n");
	// 	printf("2 - Dizer Olá!\n");
	// 	printf("0 - Sair\n\n");
	// 	
	// 	printf("Opção: ");
	// 	scanf("%i", &opcao);
	// 	
	// 	switch(opcao) {
	// 		case 1:
	// 			printf("\n\n****** Oi ******\n\n");
	// 			break;
	// 		case 2: 
	// 			printf("\n\n****** Olá ******\n\n");
	// 			break;
	// 		default:
	// 			break;
	// 	}
	// 	
	// } while(opcao != 0);
	// 	
		
	// Exercício 6

	int opcao;
	
	do {
	   	printf("Monstrodex: \n");
		printf("1 - Zikachu\n");
		printf("2 - Zulbassauro\n");
		printf("3 - Zharmander\n");
		printf("0 - Sair do Monstrodex\n");
		
		printf("Opção: ");
		scanf("%i", &opcao);
		
		switch(opcao) {
			case 0:
				printf("\nEncerrando...\n\n");
				break;
			case 1:
				printf("\nMonstro elétrico da categoria rato\n\n");
				break;
			case 2: 
				printf("\nMonstro de grama da categoria semente\n\n");
				break;
			case 3: 
				printf("\nMonstro de fogo da categoria lagarto\n\n");
				break;
			default:
				printf("\nMonstro não cadastrado. Há 8900 monstros! Temos que pegar!\n\n");
				break;
		}
		
	} while(opcao != 0);
	
	return 0;
}