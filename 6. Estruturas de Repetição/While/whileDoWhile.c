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
	// 	printf("Senha inv�lida. Tente novamente\n");
	// 	
	// 	printf("Insira sua senha: ");
	// 	scanf("%d", &senhaDigitada);
	// 	
	// }
	// 
	// printf("Senha correta. Seja bem vindo!");
	
	// Exerc�cio 2
	
	// int nDigitado;
	// 
	// printf("Insira um valor entre 1 e 6: ");
	// scanf("%f", &nDigitado);
	// 
	// while(nDigitado < 1 || nDigitado > 6) {
	// 	printf("Valor inv�lido. Tente novamente!\n");
	// 	printf("Insira um valor entre 1 e 6: ");
	// 	scanf("%f", &nDigitado);
	// }
	// 
	
		// Exerc�cio 3
		
		// int numero = 1;
		// 
		// while(numero < 7) {
		// 	printf("%i\n", numero);
		// 	numero++;
		// }
		
	// Exerc�cio 4
		
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
		
		
	// Exerc�cio 5
	
	
	// int opcao;
	// 
	// do {
	// 	printf("Escolha uma op��o: \n");
	// 	printf("1 - Dizer Oi!\n");
	// 	printf("2 - Dizer Ol�!\n");
	// 	printf("0 - Sair\n\n");
	// 	
	// 	printf("Op��o: ");
	// 	scanf("%i", &opcao);
	// 	
	// 	switch(opcao) {
	// 		case 1:
	// 			printf("\n\n****** Oi ******\n\n");
	// 			break;
	// 		case 2: 
	// 			printf("\n\n****** Ol� ******\n\n");
	// 			break;
	// 		default:
	// 			break;
	// 	}
	// 	
	// } while(opcao != 0);
	// 	
		
	// Exerc�cio 6

	int opcao;
	
	do {
	   	printf("Monstrodex: \n");
		printf("1 - Zikachu\n");
		printf("2 - Zulbassauro\n");
		printf("3 - Zharmander\n");
		printf("0 - Sair do Monstrodex\n");
		
		printf("Op��o: ");
		scanf("%i", &opcao);
		
		switch(opcao) {
			case 0:
				printf("\nEncerrando...\n\n");
				break;
			case 1:
				printf("\nMonstro el�trico da categoria rato\n\n");
				break;
			case 2: 
				printf("\nMonstro de grama da categoria semente\n\n");
				break;
			case 3: 
				printf("\nMonstro de fogo da categoria lagarto\n\n");
				break;
			default:
				printf("\nMonstro n�o cadastrado. H� 8900 monstros! Temos que pegar!\n\n");
				break;
		}
		
	} while(opcao != 0);
	
	return 0;
}