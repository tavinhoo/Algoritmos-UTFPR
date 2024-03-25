#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota;
    float mediaFinal = 0;

    for(int i = 1; i<=5; i++) {
        printf("Insira a nota da P%d:", i);
        scanf("%f", &nota);
        mediaFinal += nota;
    }

    mediaFinal /= 5.0;

    printf("Nota Final: %.2f\n", mediaFinal);

    if(mediaFinal >= 7) {
        printf("SITUACAO: APROVADO");
    } else {
        printf("SITUACAO: REPROVADO");
    }

    return 0;
}
