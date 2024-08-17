#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <locale.h>

#define tam 2

struct produto {
    int codigo;
    char desc[100];
    char marca[50];
    float preco;
};

int main() {

    int i, num, pos;
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
		printf("|  Descricao: %i  \n", listaProdutos[i].desc);
		printf("|  Marca %s    \n", listaProdutos[i].marca);
		printf("|  Preço: %.2f  \n", listaProdutos[i].preco);
		printf("----------------\n");
	}
	
	do {
		
		printf("1 - Alterar dados do produto.\n");
		printf("2 - Ver dados do produto.\n");
		printf("0 - Encerrar\n");
		
		scanf("%i", &num);
		
		if(num == 1) {
			
			printf("Insira a pos do produto que quer alterar: ");
			scanf("%i", &pos);
			
			for(i = 0; i < tam; i++) {
				if(pos == i) {
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
			}
		}
		
		if(num == 2) {
			
			printf("Insira a posicao do produto para +info: ");
			scanf("%i", &pos);
			
			for(i = 0; i<tam; i++) {
				
				if(i == pos) {
					printf("----------------\n");
					printf("|  Codigo: %i  \n", listaProdutos[i].codigo);
					printf("|  Descricao: %i  \n", listaProdutos[i].desc);
					printf("|  Marca %s    \n", listaProdutos[i].marca);
					printf("|  Preço: %.2f  \n", listaProdutos[i].preco);
					printf("----------------\n");		
				}
	    	
			}
		}
		
	} while(num != 0);
    return 0;
}
