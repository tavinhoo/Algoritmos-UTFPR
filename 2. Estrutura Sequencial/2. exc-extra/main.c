#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    // Exercício 05

    int matriz[2][2];
    int determinante;

    for(int i = 0; i <2; i++) {
        for(int j = 0; j<2; j++) {
            printf("Insira o numero da posicao [%i][%i]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

    printf("%i", determinante);


    //  Exercício 17

    /*
    float n1, n2, n3, n4, ponderada;

    printf("Insira a nota da P1: ");
    scanf("%f", &n1);

    printf("Insira a nota da P2: ");
    scanf("%f", &n2);

    printf("Insira a nota da P3: ");
    scanf("%f", &n3);

    printf("Insira a nota da P4: ");
    scanf("%f", &n4);

    ponderada = (n1*2 + n2*4 + n3*6 + n4*8)/20;

    printf("Sua nota final: %.2f", ponderada);

    */
    // Exercício 3

    /*
    float a, b, c, delta;

    printf("Insira o valor de A: ");
    scanf("%f", &a);

    printf("Insira o valor de B: ");
    scanf("%f", &b);

    printf("Insira o valor de C: ");
    scanf("%f", &c);

    delta = pow(b, 2.0) - 4.0 * a * c;

    printf("%.2f", delta);
    */

    // Exercício 4

    /*
    float L1, L2, L3, T, area;

    printf("Insira o L1 do triangulo: ");
    scanf("%f", &L1);

    printf("Insira o L2 do triangulo: ");
    scanf("%f", &L2);

    printf("Insira o L3 do triangulo: ");
    scanf("%f", &L3);

    T = (L1+L2+L3)/2.0;

    area = sqrt(T*(T-L1)*(T-L2)*(T-L3));

    printf("AREA DO TRIANGULO: %.2f ", area);
    */

    // Exercício 07

    /*
    float A, B, C, D, R, S;

    printf("Insira A: ");
    scanf("%f", &A);
    printf("Insira B: ");
    scanf("%f", &B);
    printf("Insira C: ");
    scanf("%f", &C);

    R = pow((A+B),2.0);
    S = pow((B+C), 2.0);

    D = (R + S)/2.0;

    printf("D = %.2f", D);

    */
    return 0;
}
