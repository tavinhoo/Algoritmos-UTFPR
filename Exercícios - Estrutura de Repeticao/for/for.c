#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	// int idade, i=1, soma = 0;
	//
	// for(i; i<= 10; i++) {
	// 	printf("Insira sua idade:" );
	// 	scanf("%i", &idade);
	//
	// 	printf("Hello, voc� tem %i anos!\n", idade);
	// 	soma += idade;
	// }

	// printf("Soma das idades: %i", soma);

	// float n1, n2, n3, mediaAluno, mediaGeral;
	// int i =1;
	//
	// for(i; i<= 22; i++) {
	// 	printf("----------------------");
	// 	printf("Aluno[%i]\n", i);
	// 	printf("Insira sua n1: );
	// 	scanf("%f", &n1);
	// 	printf("Insira sua n2: );
	// 	scanf("%f", &n2);
	// 	printf("Insira sua n3: );
	// 	scanf("%f", &n3);
	//
	// 	mediaAluno = (n1 + n2 + n3)/ 3.0;
	// 	mediaGeral += mediaAluno;
	// }
	//
	// printf("A m�dia geral dos alunos �: %.2f", mediaGeral);

	// float n1, n2, n3, mediaAluno, mediaGeral;
	// int i =1;
	//
	// for(i; i<= 22; i++) {
	// 	printf("----------------------");
	// 	printf("Aluno[%i]\n", i);
	// 	printf("Insira sua n1: );
	// 	scanf("%f", &n1);
	// 	printf("Insira sua n2: );
	// 	scanf("%f", &n2);
	// 	printf("Insira sua n3: );
	// 	scanf("%f", &n3);
	//
	// 	mediaAluno = (n1 + n2 + n3)/ 3.0;
	// 	mediaGeral += mediaAluno;
	//
	// 	if(mediaAluno >= 6){
	// 		printf("Aluno aprovado!");
	// 	} else {
	// 		printf("Aluno reprovado!");
	// 	}
	// }
	//
	// printf("A m�dia geral dos alunos �: %.2f", mediaGeral);

	// int qtdCarros;
	// float d, t, v;
	//
	// printf("Insira a quantidade de carros: ");
	// scanf("%i", &qtdCarros);
	//
	// int i = 1;
	//
	// for(i; i<= qtdCarros; i++) {
	// 	printf("Insira a distancia percorrida em km: ");
	// 	scanf("%f", &d);
	// 	printf("Insira o tempo em h: ");
	// 	scanf("%f", &t);
	// 	v = d/t;
	//
	// 	printf("Este carro estava a %.2f Km/H", v);
	// }

	// int i = 1, n;
	//
	// for(i; i<= 10; i++) {
	// 	printf("Insira um numero: ");
	// 	scanf("%i", &n);
	//
	// 	if(n > 0) {
	// 		printf("Este numero � positivo!\n");
	// 	} else {
	// 		printf("Este numero � negativo\n");
	// 	}
	//
	// 	if(n % 2 == 0) {
	// 		printf("Este numero � par!\n");
	// 	} else {
	// 		printf("Este numero � �mpar!\n");
	// 	}
	// }

	// float n1, n2;
	// int qtdG, i=1;
	//
	// printf("Insira a quantidade de grupos a serem comparados: " );
	// scanf("%i", &qtdG);
	//
	// for(i; i<=qtdG; i++) {
	//
	// 	printf("Insira o primeiro numero: ");
	// 	scanf("%f", &n1);
	//
	//    	printf("Insira o segundo numero: ");
	// 	scanf("%f", &n2);
	//
	// 	float maior = 0;
	// 	float menor = 0;
	//
	// 	if(n1 > n2) {
	// 		maior = n1;
	// 		menor = n2;
	// 	} else {
	// 		maior = n2;
	// 		menor = n1;
	// 	}
	//
	// 	printf("Maior: %.2f\n", maior);
	// 	printf("Menor: %.2f\n", menor);
	// 	if(n1 == n2) {
	// 		printf("S�o iguais!");
	// 	} else {
	// 		printf("N�o s�o iguais!");
	// 	}
	// }

	// EXERCICIO 7

	int

		// EXERC�CIO 8

		int i = 1,
			cod, altura, alturaMaior, codMaior, alturaMenor, codMenor;

	for (i; i <= 3; i++)
	{

		printf("----- [%i] ----\n", i);
		printf("Insira o seu numero: ");
		scanf("%i", &cod);
		printf("Insira a sua altura em cm: ");
		scanf("%i", &altura);

		if (i == 1)
		{
			alturaMaior = altura;
			alturaMenor = altura;
			codMaior = cod;
			codMenor = cod;
		}

		if (altura > alturaMaior)
		{
			codMaior = cod;
			alturaMaior = altura;
		}

		if (altura < alturaMenor)
		{
			codMenor = cod;
			alturaMenor = altura;
		}
	}

	printf("Código do maior aluno: %i\n", codMaior);
	printf("Sua altura: %i\n", alturaMaior);

	printf("Código do menor aluno: %i\n", codMenor);
	printf("Sua altura: %i\n", alturaMenor);

	return 0;
}
