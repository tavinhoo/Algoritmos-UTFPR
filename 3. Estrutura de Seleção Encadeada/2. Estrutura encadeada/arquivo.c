#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	/*
	int num;
	
	printf("Insira um numero: ");
	scanf("%i", &num);
	
	if(num > 0) {
		printf("Valor positivo");
	} else if(num < 0) {
		printf("Valor negativo");
	} else {
		printf("Valor neutro!");
	}
	*/
	
	// Exercício 2
	
	/*
	float salario;
	
	printf("Insira o seu salário: ");
	
	if(salario > 18000) {
		printf("Voce é classe A!");
	} else if(salario > 9000) {
		printf("Voce é classe B!");
	} else {
		printf("Voce é classe C ou menor!");
	}
	*/
	
	// Exerício 3
	
	/*
	float temperatura_agua;
	
	printf("Insira a temperatura da água: ";
	scanf("%f", &temperatura_agua);
	
	if(temperatura_agua > 100) {
		printf("A água está muito quente!");
	} else if(temperatura_agua > 0) {
		printf("A água está em estado liquido!");
	} else {
		printf("A água está em estado solido!");
	}
	*/
	
	// Exercício 4
	
	/*
	int idade;
	
	printf("Insira sua idade: ");
	scanf("%i", &idade);
	
	if(idade > 65) {
		printf("Voce está na melhor idade!");
	} else if(idade >= 40) {
		printf("Você está na meia idade)
	} else if(idade >= 30) {
		printf("Você é adulto!");
	} else if(idade >= 18) {
		printf("Você é adulto jovem!");
	} else if(idade >= 12) {
		printf("Você é adolescente");
	} else if(idade >= 2) {
		printf("Você é criança!");
	} else {
		printf("Você é bebê!");
	*/
	
	// Exercício 5
	
	float peso, altura, imc;
	
	printf("Insira seu peso: ");
	scanf("%f", &peso);
	
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / pow(altura, 2.0);
	
	printf("Valor do seu IMC: %.2f\n", imc);
	
	if(imc < 17) {
		printf("muito abaixo do peso!");
	} else if(imc < 18.5) {
		printf("abaixo do peso!");
	} else if(imc < 25) {
		printf("peso normal!");
	} else if(imc < 30) {
		printf("acima do peso!");
	} else if(imc < 35) {
		printf("obesidade I");
	} else if(imc < 40) {
		printf("obesidade II (severa)!");
	} else {
		printf("“obesidade III (mórbida)");
	}
	
}