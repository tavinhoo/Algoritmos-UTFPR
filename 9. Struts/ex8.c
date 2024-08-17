#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 2

struct ContaBancaria {
    char nome[50];
    char cpf[15];
    int numeroConta;
    char tipoConta[30];
};

int main() {
	
    struct ContaBancaria clientesBanco[tam];
    int i;

    for (i = 0; i < tam; i++) {
    	printf("\nCliente: [%i]\n", i + 1);
        printf("Insira o nome do cliente: ");
        gets(clientesBanco[i].nome);
        
        printf("Insira o CPF do cliente: ");
        gets(clientesBanco[i].cpf);

        printf("Insira o numero da conta: ");
        scanf("%d", &clientesBanco[i].numeroConta);
        
        fflush(stdin);

        printf("Insira o tipo da conta: ");
        gets(clientesBanco[i].tipoConta);
    }

    printf("\nInformações dos clientes:\n");
    for (i = 0; i < tam; i++) {
        printf("\nTitular da conta: %s\n", clientesBanco[i].nome);
        printf("CPF do cliente: %s\n", clientesBanco[i].cpf);
        printf("Numero da conta: %d\n", clientesBanco[i].numeroConta);
        printf("Tipo de conta: %s\n", clientesBanco[i].tipoConta);
    }

    return 0;
}
