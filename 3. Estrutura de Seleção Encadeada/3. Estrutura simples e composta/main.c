#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    // Exerc�cio 1

    /*
    int idade_nadador;

    printf("Insira a idade do nadador: ");
    scanf("%i", &idade_nadador);

    if(idade_nadador > 5) {
        printf("Infantil A");
    } else if(idade_nadador > 8) {
        printf("Infantil B");
    } else if(idade_nadador > 11) {
        printf("Juvenil A");
    } else if(idade_nadador > 14) {
        printf("Juvenil B");
    } else if(idade_nadador > 18){
        printf("Senior");
    } else {
        printf("N�o pode nadar!");
    }
    */

    // Exerc�cio 2

    /*
    float salario;
    int solteiro, filhos;

    printf("Insira seu sal�rio: ");
    scanf("%f", &salario);

    printf("Voc� � solteiro?\n[1]Sim [2]N�o:");
    scanf("%i", &solteiro);

    printf("Voc� tem filhos?\n[1]Sim [2]N�o:");
    scanf("%i", &filhos);

    if(solteiro == 2) {
        if(filhos = 1) {
            salario += salario * 0.2;
        } else if(filhos = 2) {
            salario += salario * 0.15;
        }
    }

    printf("Seu sal�rio ser� de: R$ %.2f", salario);
    */

    // Exerc�cio 3

    /*
    char nome_capital[50];

    printf("Insira o nome de uma capital para verificarmos: ");
    gets(nome_capital);

    if(strcmp(nome_capital, "Teresina") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "S�o Lu�s") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Fortaleza") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Natal") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Jo�o Pessoa") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Recife") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Macei�") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Aracaju") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Salvador") == 0) {
        printf("Pertence � regi�o Nordeste!");
    } else if(strcmp(nome_capital, "Belo Horizonte") == 0) {
        printf("Pertence � regi�o Sudeste!");
    } else if(strcmp(nome_capital, "Vit�ria") == 0) {
        printf("Pertence � regi�o Sudeste!");
    } else if(strcmp(nome_capital, "Rio de Janeiro") == 0) {
        printf("Pertence � regi�o Sudeste!");
    } else if(strcmp(nome_capital, "S�o Paulo") == 0) {
        printf("Pertence � regi�o Sudeste!");
    } else {
        printf("N�o pertence � regi�o Nordeste nem � regi�o Sudeste!");
    }
    */

    // Exerc�cio 4

    float nota;

    printf("Insira sua nota: ");
    scanf("%f", &nota);

    if(nota < 2) {
        printf("Nota p�ssima");
    } else if(nota < 4) {
        printf("Nota ruim");
    } else if(nota < 6) {
        printf("Nota razo�vel");
    } else if(nota == 7) {
        printf("Nota boa");
    } else if(nota < 9) {
        printf("Nota muito boa");
    } else if(nota <= 10) {
        printf("Nota �tima");
    } else {
        printf("Nota inv�lida");
    }
    return 0;
}
