#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	// DO WHILE (EXERCICIO 1)
	
	setlocale(LC_ALL, "Portuguese");
	
	// int numerador, denominador;
	// float resultado;
	// 
	// do {
// 
	// 	printf("Insira o numerador(a) de a/b: ");
	// 	scanf("%i", &numerador);
	// 	
	// 	printf("Insira o denominador(b) de a/b: ");
	// 	scanf("%i", &denominador);
	// 	
	// 	if(denominador != 0) {
	// 		resultado = (float)numerador/denominador;
	// 		printf("Para numerador igual a %i e denominador igual a %i, o resultado é %.2f\n", numerador, denominador, resultado);
	// 	} else {
	// 		printf("ERRO: divisão por zero\n");
	// 	}
	// 	
	// } while(2 > 1);
	
	// WHILE (EXERCICIO 3)
	
	// char resposta[2] = "S"; // somente para entrar no while
	// int qtd;
	// int cont = 0;
	// float preco, vAcumulado, somaMedia, vMedia;
	// 
	// 	vAcumulado = 0;
	// 	vMedia = 0;
	// 	somaMedia = 0;
	// 
	// while(strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0) {
	// 	
	// 	printf("Mais mercadorias?(S/N)");
	// 	gets(resposta);
	// 	
	// 	fflush(stdin);
	// 	
	// 	if(strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0) {
	// 		
	// 		printf("Insira a quantidade deste produto: ");
	// 		scanf("%i", &qtd);
	// 					
	// 		printf("Insira o valor do produto: ");
	// 		scanf("%f", &preco);
	// 		
	// 		fflush(stdin);
	// 		
	// 		somaMedia += preco;
	// 		vAcumulado += qtd * preco;
	// 		cont++;
	// 		
	// 	} else {
	// 		vMedia = somaMedia / cont;
	// 		printf("Valor total em estoque: R$ %.2f\n", vAcumulado);
	// 		printf("Media do valor de custo: R$ %.2f", vMedia);
	// 		break;
	// 	}
	// 	
	// }
	
	// FOR (EXERCICIO 5)
	
	// int n1, n2, soma = 0;
	// 
	// printf("Insira o n1: ");
	// scanf("%i", &n1);
	// 
	// printf("Insira o n2: ");
	// scanf("%i", &n2);
	// 
	// if(n1 < n2) {
	// 	for(n1; n1<=n2; n1++) {
	// 		soma += n1;
	// 	}
	// 	printf("%i", soma);
	// } else {
	// 	for(n2; n2<=n1; n2++) {
	// 		soma += n2;
	// 	}
	// 	printf("%i", soma);
	// }	
	
	// ********************** CONTINUAÇÃO **********************
	
	// Exercício 6
	
	/* 
	
	Crie um programa em linguagem C com a estrutura de repetição com teste no incio (while) que
	gere os primeiros n termos da sequência de Fibonacci, onde n é fornecido pelo usuário. A sequência
	de Fibonacci é uma sucessão de números naturais, em que os dois primeiros termos contêm o valor
	1(um) e, a partir do terceiro termo, sua construção é dada pela soma de seus dois termos antecessores.
	Caso de teste para o exercício:
	
	Para n = 7, a sequência de Fibonacci: é 1, 1, 2, 3, 5, 8, 13;
	Para n = 10, a sequência de Fibonacci: é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
	
	*/
	
	int e1, e2, en, n, i = 3;
	
	//en		5 = 3 + 2  en = en-1 + en-2 
 	 // en-1   3 = 5 - 2  en-1 = en - en-2
 	 // en-2	2 = 5 - 3  en-2 = en - en-1
		
	
	printf("Insira a quantidade de elementos a serem exibidos: ");
	scanf("%i", &n);

	while(i<n) {
		
		if(i == 3) {
			e1 = 1; // 1, "2", 3
			e2 = 1; // "1", 2, 3
			en = e1 + e2;
			printf("%i, %i, %i, ", e1, e2, en);
		}
		
		e2 = e1;
		e1 = en;
		en = e1 + e2;
				
		if(i + 1 == n) {
			printf("%i;", en);
		} else {
			printf("%i, ", en);
		}
		i++;
	}

	//********************** Exercício 4 **********************
	
	// int num = 1000, n;
	// double acumulador = 0.0;
	// 
	// printf("Insira a quantidade de termos a ser dividida e somada: ");
	// scanf("%i", &n);
	// 
	// for(int i = 1; i<=n; i++) {
	// 	if(i % 2 == 0) {
	// 		acumulador  -= (double)num/i;
	// 	} else {
	// 		acumulador += (double)num/i;
	// 	}
	// 	num -= 3;
	// }
	// 
	// printf("para n=%i, o valor da soma é: %.2f", n, acumulador);
	
	//********************** Exercício 2 **********************
	
	// int maior, n;
	// 
	// maior = 0;
	// 
	// do {
	// 	printf("Insira um valor: ");
	// 	scanf("%i", &n);
	// 	
	// 	if(n > maior) {
	// 		maior = n;
	// 	}
	// 	
	// 	if(n <0) {
	// 		break;
	// 	}
	// 	
	// 	if(n == 0) {
	// 		printf("O maior valor: %i", maior);
	// 		break;
	// 	}
	// 	
	// } while(n > 0);
	
}
