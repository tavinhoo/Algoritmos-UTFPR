#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	// Exerc�cio 1
	/*
	int num;
	printf("Insira um valor entre 1 e 6: ");
	scanf("%i", &num);
	
	if(num >= 1 & num <= 6) {
		printf("Valor digitado com sucesso!");
	} else {
		printf("Valor fora do intervalo permitido!");
	}
	
	
	// Exerc�cio 2
	
	int num1;
	printf("Insira um valor menor que 1 ou maior que 6: ");
	scanf("%i", &num1);
	
	if(num1 < 1 && num > 6) {
		printf("Valor digitado com sucesso!");
	} else {
		printf("Valor n�o pode estar entre 1 e 6!");
	}
	
	// Exerc�cio 3
	
	int idade;
	
	printf("Insira sua idade: ");
	scanf("%i", &idade);
	
	if(idade >= 18 && idade <= 65) {
		printf("Voce � obrigado a votar!");
	} else {
		printf("Voc� n�o � obrigado a votar!");
	}
	*/
	// Exerc�cio 4
	
	/*
	char user[50];
	char psw[50];
	
	printf("Usu�rio: ");
	gets(user);
	
	
	printf("Senha: ");
	gets(psw);
	
	
	if(strcmp(user, "chefe") == 0 && strcmp(psw, "1234567") == 0) {
		printf("login realizado!");
	} else {
		printf("usu�rio e/ou senha incorretos!");
	}
	*/

	// Exerc�cio 5
	

	int idade, contribuicao;
	char genero;
	
	printf("Voc� � do g�nero: ");
	scanf("%c", &genero);
	
	printf("Insira a sua idade: ");
	scanf("%i", &idade);
	
	printf("Insira seu tempo de contribui��o: ");
	scanf("%i", &contribuicao);
	
	if((genero == 'm' || genero == 'M') && idade > 65 && contribuicao > 30 
	|| (genero == 'f' || genero == 'F') && idade > 60 && contribuicao > 25) {
		printf("Voc� pode se aposentar!");
	} else {
		printf("Voc� n�o pode se aposentar!");
	}

	
	// Exerc�cio 6
	/*
	int l1, l2, l3;
	
	printf("Insira o lado 1 do triangulo: ");
	scanf("%i", &l1);
	
	printf("Insira o lado 2 do triangulo: ");
	scanf("%i", &l2);
	
	printf("Insira o lado 3 do triangulo: ");
	scanf("%i", &l3);
	
	if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2) {
		printf("� um tri�ngulo!!");
	} else {
		printf("N�o � um tri�ngulo!");
	}
	*/
	return 0;
}












