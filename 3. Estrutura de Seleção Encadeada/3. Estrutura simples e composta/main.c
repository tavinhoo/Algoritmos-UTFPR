#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    // Exercício 1

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
        printf("Não pode nadar!");
    }
    */

    // Exercício 2

    /*
    float salario;
    int solteiro, filhos;

    printf("Insira seu salário: ");
    scanf("%f", &salario);

    printf("Você é solteiro?\n[1]Sim [2]Não:");
    scanf("%i", &solteiro);

    printf("Você tem filhos?\n[1]Sim [2]Não:");
    scanf("%i", &filhos);

    if(solteiro == 2) {
        if(filhos = 1) {
            salario += salario * 0.2;
        } else if(filhos = 2) {
            salario += salario * 0.15;
        }
    }

    printf("Seu salário será de: R$ %.2f", salario);
    */

    // Exercício 3

    /*
    char nome_capital[50];

    printf("Insira o nome de uma capital para verificarmos: ");
    gets(nome_capital);

    if(strcmp(nome_capital, "Teresina") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "São Luís") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Fortaleza") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Natal") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "João Pessoa") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Recife") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Maceió") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Aracaju") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Salvador") == 0) {
        printf("Pertence à região Nordeste!");
    } else if(strcmp(nome_capital, "Belo Horizonte") == 0) {
        printf("Pertence à região Sudeste!");
    } else if(strcmp(nome_capital, "Vitória") == 0) {
        printf("Pertence à região Sudeste!");
    } else if(strcmp(nome_capital, "Rio de Janeiro") == 0) {
        printf("Pertence à região Sudeste!");
    } else if(strcmp(nome_capital, "São Paulo") == 0) {
        printf("Pertence à região Sudeste!");
    } else {
        printf("Não pertence à região Nordeste nem à região Sudeste!");
    }
    */

    // Exercício 4

    float nota;

    printf("Insira sua nota: ");
    scanf("%f", &nota);

    if(nota < 2) {
        printf("Nota péssima");
    } else if(nota < 4) {
        printf("Nota ruim");
    } else if(nota < 6) {
        printf("Nota razoável");
    } else if(nota == 7) {
        printf("Nota boa");
    } else if(nota < 9) {
        printf("Nota muito boa");
    } else if(nota <= 10) {
        printf("Nota ótima");
    } else {
        printf("Nota inválida");
    }
    return 0;
}
