#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{

    void flushall() {
        fflush(stdin);
        fflush(stdout);
}

    // Lista 2

    // Exerc�cio 1

    /*
    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, mundo!!!\n");
    */

    // Exerc�cio 4

    /*
    char name[50];

    printf("Insira seu nome: ");
    gets(name);

    printf("Seja bem vindo %s!!", name);
    */

    // Exerc�cio 5

    /*
    int age;

    printf("Insira sua idade: ");
    flushall();

    scanf("%i", &age);
    setlocale(LC_ALL, "Portuguese");
    printf("Legal! Voc� tem %i anos.", age);
    */

    // Exerc�cio 6

    /*
    int idade, ano_nascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    ano_nascimento = 2024 - idade;

    printf("Voc� tem %d anos e nasceu em %d.\n", idade, ano_nascimento);
    */

    // Exerc�cio 7

    /*
    int ano_nascimento, provavel_idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    provavel_idade = 2024 - ano_nascimento;

    printf("Voc� tem aproximadamente %d anos.\n",  provavel_idade);
    */

    // Exerc�cio 8

    /*
    int idade, ano_nascimento;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    ano_nascimento = 2024 - idade;

    printf("Seu prov�vel ano de nascimento � %d.\n", ano_nascimento);

    */

    // Exerc�cio 9

    /*
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit)
    */


    // Exerc�cio 10

    /*
    float celsius, fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);
    */

    // Exerc�cio 11

    /*
    int a, b, temp;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Troca dos valores
    temp = a;
    a = b;
    b = temp;

    printf("Ap�s a troca, a = %d e b = %d.\n", a, b);
    */
    return 0;
}


