#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	// ******************************** Exerc�cio 1 ********************************
	
	// float peso, altura, imc;
	// char resposta[2];
	// 
	// printf("Quer fazer o teste?(s/n)");
	// gets(resposta);
	// 
	// while(strcmp(resposta, "s") == 0) {
	// 			
	// 	printf("Insira seu peso(kg): ");
	// 	scanf("%f", &peso);
	// 	
	// 	printf("Insira sua altura(m): ");
	// 	scanf("%f", &altura);
	// 	
	// 	imc = peso / pow(altura, 2.0);		
	// 	
	// 	printf("Sua massa corporea: %.2f\n", imc);
// 
	// 	printf("Quer fazer o teste?(s/n)");
	// 	gets(resposta);
	// }		
	
	// Exerc�cio 2
	
	// int num, maior;
	// 
	// maior = 0;
	// 
	// do {
	// 	printf("Insira um numero: ");
	// 	scanf("%i", &num);
	// 	
	// 	if(num > maior) {
	// 		maior = num;
	// 	}
	// 	
	// } while(num > 0); 
	// 
	// printf("Maior valor digitado: %i", maior);
	
	// ******************************** Exerc�cio 3 ********************************
	
	// int vFulano = 0, vCiclano = 0, opcao;
	// 
	// do {
	// 	printf("CANDIDATOS:\n[1]-Fulano\n[2]-Ciclano\n[0] - Encerrar vota��o\nOpcao: ");
	// 	scanf("%i", &opcao);
	// 	
	// 	if(opcao == 1) {
	// 		vFulano++;
	// 	}
	// 	
	// 	if(opcao == 2) {
	// 		vCiclano++;
	// 	}
	// 	
	// } while(opcao != 0);
	// 
	// if(vFulano > vCiclano) {
	// 	printf("O vencedor � Fulano!\n");
	// } 
	// 
	// if(vFulano<vCiclano) {
	// 	printf("O vencedor � Ciclano!\n");
	// }
	// 
	// if(vFulano == vCiclano) {
	// 	printf("Empate!\n");
	// }
	// 
	// printf("FULANO: [%i]\nCICLANO: [%i]", vFulano, vCiclano);
	
	// ******************************** Exerc�cio 4 ********************************
	
	// int vFulano = 0, vCiclano = 0, opcao;
	// char escolha[2];
	// 
	// do {
	// 	printf("CANDIDATOS:\n[1]-Fulano\n[2]-Ciclano\nOpcao: ");
	// 	scanf("%i", &opcao);
	// 	
	// 	if(opcao == 1) {
	// 		vFulano++;
	// 	}
	// 	
	// 	if(opcao == 2) {
	// 		vCiclano++;
	// 	}
	// 	
	// 	fflush(stdin);
	// 	
	// 	printf("Deseja sair?(s/n): ");
	// 	gets(escolha);
	// 	
	// } while(strcmp(escolha, "n") == 0);
	// 
	// if(vFulano > vCiclano) {
	// 	printf("O vencedor � Fulano!\n");
	// } 
	// 
	// if(vFulano<vCiclano) {
	// 	printf("O vencedor � Ciclano!\n");
	// }
	// 
	// if(vFulano == vCiclano) {
	// 	printf("Empate!\n");
	// }
	// 
	// printf("FULANO: [%i]\nCICLANO: [%i]", vFulano, vCiclano);

	// ******************************** Exerc�cio 5 ********************************
		
	int vFulano = 0, vCiclano = 0, opcao;
	
	do {
		printf("CANDIDATOS:\n[1]-Fulano\n[2]-Ciclano\n[0] - Encerrar vota��o\nOpcao: ");
		scanf("%i", &opcao);
		
		while(opcao < 0 || opcao > 2) {
			printf("OPCAO INVALIDA. TENTE NOVAMENTE!\n");
			printf("CANDIDATOS:\n[1]-Fulano\n[2]-Ciclano\n[0] - Encerrar vota��o\nOpcao: ");
			scanf("%i", &opcao);
		}
	
		
		if(opcao == 1) {
			vFulano++;
		}
		
		if(opcao == 2) {
			vCiclano++;
		}
		
	} while(opcao != 0);
	
	if(vFulano > vCiclano) {
		printf("O vencedor � Fulano!\n");
	} 
	
	if(vFulano<vCiclano) {
		printf("O vencedor � Ciclano!\n");
	}
	
	if(vFulano == vCiclano) {
		printf("Empate!\n");
	}
	
	printf("FULANO: [%i]\nCICLANO: [%i]", vFulano, vCiclano);
	
	
	
}