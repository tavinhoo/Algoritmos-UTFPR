#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");


    // Exercício 1

    /*
     float salario;

     printf("Digite o seu salário: R$ ");
     scanf("%f", &salario);

     if (salario > 10000) {
         printf("Você ganha bem!\n");
     }
     */

    // Exercício 2

    /*
    float salario;

    printf("Digite o seu salário: R$ ");
    scanf("%f", &salario);

    if (salario < 1045) {
        printf("Você ganha menos do que um salário mínimo.\n");
    } else {
        printf("Você ganha pelo menos um salário mínimo.\n");
    }
    */

    // Exercício 3

    /*
    float temperatura;

    printf("Digite a sua temperatura corporal: ");
    scanf("%f", &temperatura);

    if (temperatura < 37) {
        printf("Você está sem febre.\n");
    } else {
        printf("Você está com febre!\n");
    }
    */

    // Exercício 4

    /*
    int senha;

    printf("Insira a senha: ");
    scanf("%i", &senha);

    if(senha != 123456) {
        printf("SENHA NÃO CONFERE!");
    }
    */

    // Exercício 5

    /*
    int senha, senha_conf;

    printf("Insira uma senha que contenha somente números: ");
    scanf("%i", &senha);

    printf("Insira a senha novamente: ");
    scanf("%i", &senha_conf);

    if(!(senha_conf == senha)) {
        printf("Senha não confere!");
    } else {
        printf("Senha criada com sucesso!");
    }
    */

    // Exercício 6

    /*
    float nota1, nota2, mediaFinal;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);

    mediaFinal = (nota1 + nota2)/2.0;

    if(mediaFinal >= 6.0) {
        printf("APROVADO!");
    } else {
        printf("REPROVADO!");
    }
    */

    // Exercício 7

    /*
    char nome[50];
    char genero;

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite o seu gênero (f para feminino, m para masculino): ");
    scanf(" %c", &genero);

    if (genero == 'f') {
       printf("Olá, senhora %s.\n", nome);
    } else {
       printf("Olá, senhor %s.\n", nome);
    }
       */

    // Exercício 8

    /*
    int a, b, c;

    printf("Insira o primeiro valor: ");
    scanf("%i", &a);

    printf("Insira o segundo valor: ");
    scanf("%i", &b);

    printf("Insira o terceiro valor: ");
    scanf("%i", &c);

    if(a > b && a > c) {
        printf("O maior valor é: %i", a);
    } else if(b > c) {
        printf("O maior valor é: %i", b);
    } else {
        printf("O maior valor é: %i", c);
    }
    */

    // Exercício 9

    /*
     int nProduzido, p_comDefeito;

     printf("Insira a quantidade de parafusos produzidos: ");
     scanf("%i", &nProduzido);

     printf("Insira a quantidade de parafusos com defeito: ");
     scanf("%i", &p_comDefeito);

     if(p_comDefeito > (nProduzido * 0.1)) {
        printf("A produção está ruim.");
     } else {
       printf("A produção está boa.");
     }
     */

    // Exercício 10

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("%d é par.\n", numero);
    }
    else
    {
        printf("%d é ímpar.\n", numero);
    }











}
