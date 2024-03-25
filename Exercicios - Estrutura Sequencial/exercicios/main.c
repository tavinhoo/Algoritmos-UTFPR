#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exercício 1
    printf("%s %s %s","Eu estou", "fazendo" , "concatenacao.");

    // Exercício 2

    char str1[50] = "Olá, amigo! ";
    char str2[50] = "Este é um texto tem uma vírgula dentro das aspas. ";
    char str3[50] = "Mas eu sei que quando está dentro das aspas ela representa apenas uma vírgula. ";
    char str4[50] = "E quando está fora representa o operador de concatenação.";

    printf("%s %s %s %s", str1, str2, str3, str4);

    return 0;
}



