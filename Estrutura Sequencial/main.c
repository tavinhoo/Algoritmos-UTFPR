#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Calcular media de um aluno com base em suas duas notas

    float nota1, nota2, mediaFinal;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);

    mediaFinal = (nota1 + nota2)/2.0;

    printf("Nota final: %.2f", mediaFinal);

    return 0;
}
