#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <locale.h>
#include <math.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	// 
	// char letra;
	// char resp[20];
	// 
	// printf("Voc� quer minusculo ou maiusculo?");
	// gets(resp);
	// 
	// strlwr(resp);
	// 
// 
	// if(strcmp(resp, "maiuscula") == 0) {
	// 	for(letra = 'A'; letra<='Z'; letra++) {
	// 		printf("%c", letra);
	// 	}
	// }
// 
	// if(strcmp(resp, "minuscula") == 0) {
	// 	for(letra = 'a'; letra<='z'; letra++) {
	// 		printf("%c", letra);
	// 	}
	// }	
	
	
	// Exerc�cio 2;
	
	// int i = 1;
	// 
	// char menu[200] = "[1] - Media entre os numeros digitados\n[2] - Diferen�a do maior pelo menor\n[3] - Produto entre os numeros digitados\n[4] - Divis�o do primeiro pelo segundo";
	// 
	// for(i; i<= 10; i++) {
	// 	
	// 	int response;
	// 	float n1, n2;
	// 	
	// 	printf("Insira o primeiro numero: ");
	// 	scanf("%f", &n1);
	// 	printf("Insira o segundo numero: ");
	// 	scanf("%f", &n2);
	// 	
	// 	printf("%s\n", menu);
	// 	
	// 	printf("OP��O: ");
	// 	scanf("%i", &response);
	// 	
	// 	switch(response)
	// 	{
	// 	case 1:
	// 		printf("%f", ((n1 + n2)/2.0));
	// 		break;
	// 	case 2:
	// 		if(n2 > n1) {
	// 			printf("media: %.2f\n", n2 - n1);
	// 		} else {
	// 			printf("media: %.2f\n", n1 - n2);
	// 		}
	// 		break;
	// 	case 3:
	// 		printf("produto: %.2f\n", n1 * n2);
	// 		break;
	// 	case 4:
	// 		if(n2 == 0) {
	// 			printf("N2 n�o pode ser 0 para esta opera��o\n");
	// 			break;
	// 		} else {
	// 			printf("divisao: %.2f\n", (n1/n2));
	// 		}
	// 		break;
	// 	default:
	// 		printf("ERRO.\n");
	// 		break;
	// 	}
	// 	printf("encerrando usuario...\n");
	// 	printf("-----------------------\n");
	// }
	
	// Exerc�cio 3
	
	int qtd;
	int i = 1;
	float n1, n2;
	
	printf("Quantas vezes voce quer executar o programa? ");
	scanf("%i", qtd);

	for(i; i<=qtd; i++) {
		
		char response;
		char menu[200] = "a) O primeiro n�mero elevado ao segundo n�mero\nb) Raiz quadrada de cada um dos n�meros.\nc) Raiz c�bica de cada um dos n�meros";
		
		printf("Insira o primeiro valor: ");
		scanf("%f", n1);
		
		printf("Insira o segundo valor: ");
		scanf("%f", n2);
		
		printf("%s", menu);
		printf("OP��O:" );
		gets(response);

		switch(response)
		{
		case 1:
			printf("%.2f", pow(n1, n2));
			break;
		case 2:
			printf("N1: %.2f, N2: %.2f ", sqrt(n1), sqrt(n2));
			break;
		case 3:
			printf("N1: %.2lf, N2: %.2lf ", (float)(pow(n1, 1/3)), (float)pow(n2, 1/3));
			break;
		default:
			printf("OP��O INV�LIDA");
			break;
		}
	}
	
	return 0;
}