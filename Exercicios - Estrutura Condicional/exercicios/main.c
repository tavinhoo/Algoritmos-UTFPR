#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");


    // Exerc�cio 1

    /*
     float salario;

     printf("Digite o seu sal�rio: R$ ");
     scanf("%f", &salario);

     if (salario > 10000) {
         printf("Voc� ganha bem!\n");
     }
     */

    // Exerc�cio 2

    /*
    float salario;

    printf("Digite o seu sal�rio: R$ ");
    scanf("%f", &salario);

    if (salario < 1045) {
        printf("Voc� ganha menos do que um sal�rio m�nimo.\n");
    } else {
        printf("Voc� ganha pelo menos um sal�rio m�nimo.\n");
    }
    */

    // Exerc�cio 3

    /*
    float temperatura;

    printf("Digite a sua temperatura corporal: ");
    scanf("%f", &temperatura);

    if (temperatura < 37) {
        printf("Voc� est� sem febre.\n");
    } else {
        printf("Voc� est� com febre!\n");
    }
    */

    // Exerc�cio 4

    /*
    int senha;

    printf("Insira a senha: ");
    scanf("%i", &senha);

    if(senha != 123456) {
        printf("SENHA N�O CONFERE!");
    }
    */

    // Exerc�cio 5

    /*
    int senha, senha_conf;

    printf("Insira uma senha que contenha somente n�meros: ");
    scanf("%i", &senha);

    printf("Insira a senha novamente: ");
    scanf("%i", &senha_conf);

    if(!(senha_conf == senha)) {
        printf("Senha n�o confere!");
    } else {
        printf("Senha criada com sucesso!");
    }
    */

    // Exerc�cio 6

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

    // Exerc�cio 7

    /*
    char nome[50];
    char genero;

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite o seu g�nero (f para feminino, m para masculino): ");
    scanf(" %c", &genero);

    if (genero == 'f') {
       printf("Ol�, senhora %s.\n", nome);
    } else {
       printf("Ol�, senhor %s.\n", nome);
    }
       */

    // Exerc�cio 8

    /*
    int a, b, c;

    printf("Insira o primeiro valor: ");
    scanf("%i", &a);

    printf("Insira o segundo valor: ");
    scanf("%i", &b);

    printf("Insira o terceiro valor: ");
    scanf("%i", &c);

    if(a > b && a > c) {
        printf("O maior valor �: %i", a);
    } else if(b > c) {
        printf("O maior valor �: %i", b);
    } else {
        printf("O maior valor �: %i", c);
    }
    */

    // Exerc�cio 9

    /*
     int nProduzido, p_comDefeito;

     printf("Insira a quantidade de parafusos produzidos: ");
     scanf("%i", &nProduzido);

     printf("Insira a quantidade de parafusos com defeito: ");
     scanf("%i", &p_comDefeito);

     if(p_comDefeito > (nProduzido * 0.1)) {
        printf("A produ��o est� ruim.");
     } else {
       printf("A produ��o est� boa.");
     }
     */

    // Exerc�cio 10

    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("%d � par.\n", numero);
    }
    else
    {
        printf("%d � �mpar.\n", numero);
    }











}
