#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <locale.h>

#define tam 10

struct produto {
    int codigo;
    char desc[100];
    char marca[50];
    float preco;
};

int main() {

    int i, num;
    struct produto listaProdutos[tam];  
	int cod;
    char marca[50];
    char desc[100];
    float preco;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < tam; i++) {
    	
    	printf("#### PRODUTO %i ####\n", i + 1);
        printf("Insira o código do produto: ");
        scanf("%i", &cod);

        fflush(stdin);  

        printf("Insira a descrição do produto: ");
        gets(desc);  

        printf("Insira a marca do produto: ");
        gets(marca); 

        fflush(stdin);  

        printf("Insira o preço: ");
        scanf("%f", &preco);  

        listaProdutos[i].codigo = cod;  
		strcpy(listaProdutos[i].desc, desc);
        strcpy(listaProdutos[i].marca, marca);
        listaProdutos[i].preco = preco;
    }
    
    for(i = 0; i<tam; i++) {
    	printf("----------------\n");
		printf("|  Codigo: %i  \n", listaProdutos[i].codigo);
		printf("|  Marca %s    \n", listaProdutos[i].marca);
		printf("----------------\n");
	}
    
    do {
    	printf("Insira o codigo do produto desejado: ");
    	scanf("%i", &num);	
    	
    	printf("\n");
    
    	for(i = 0; i<tam; i++) {
			if(listaProdutos[i].codigo == num) {
				printf("CODIGO: %i\n", listaProdutos[i].codigo);
				printf("DESCRIÇÃO: %s\n", listaProdutos[i].desc);
				printf("MARCA: %s\n", listaProdutos[i].marca);
				printf("PRECO: %.2f R$\n", listaProdutos[i].preco);
			}
		}
    	
	} while(num >= 0 && num < 9);

	
    return 0;
}
