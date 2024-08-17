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

    // Exercício 1

    /*
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, mundo!!!\n");
    */

    // Exercício 4

    /*
    char name[50];

    printf("Insira seu nome: ");
    gets(name);

    printf("Seja bem vindo %s!!", name);
    */

    // Exercício 5

    /*
    int age;

    printf("Insira sua idade: ");
    flushall();

    scanf("%i", &age);
    setlocale(LC_ALL, "Portuguese");
    printf("Legal! Você tem %i anos.", age);
    */

    // Exercício 6

    /*
    int idade, ano_nascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    ano_nascimento = 2024 - idade;

    printf("Você tem %d anos e nasceu em %d.\n", idade, ano_nascimento);
    */

    // Exercício 7

    /*
    int ano_nascimento, provavel_idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    provavel_idade = 2024 - ano_nascimento;

    printf("Você tem aproximadamente %d anos.\n",  provavel_idade);
    */

    // Exercício 8

    /*
    int idade, ano_nascimento;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    ano_nascimento = 2024 - idade;

    printf("Seu provável ano de nascimento é %d.\n", ano_nascimento);

    */

    // Exercício 9

    /*
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit)
    */


    // Exercício 10

    /*
    float celsius, fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);
    */

    // Exercício 11

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

    printf("Após a troca, a = %d e b = %d.\n", a, b);
    */
    return 0;
}


