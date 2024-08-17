#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 2

struct Funcionario {
	char nome[50];
	char cargo[30];
	float salario;
};

int main() {
	
	struct Funcionario listaFuncionarios[tam];
	float maiorSalario;
	
    for (i = 0; i < tam; i++) {
    	
    	printf("Insira o nome do funcionario: ");
    	gets(listaFuncionarios[i].nome);
    	
    	printf("Insira o cargo do funcionario: ");
    	gets(listaFuncionarios[i].cargo);
    	
    	fflush(stdin);
    	
    	printf("Insira o cargo do funcionario: ");
    	scanf("%f", &listaFuncionarios[i].salario);    	
    }

    for (i = 0; i < tam; i++) {
		if(i == 0) {
			maiorSalario = listaFuncionarios[i].salario;
		}
		
		if(maiorSalario < listaFuncionarios[i].salario) {
			maiorSalario = listaFuncionarios[i].salario;
		}
    }

	printf("O maior salario é de:  R$ %.2f", maiorSalario);
	
    return 0;
}
