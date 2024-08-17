#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	/*
	int altura;
	printf("Insira sua altura em cm: ");
	scanf("%i", &altura);

	if(altura < 160) {
		int idade;
		printf("Insira sua idade: ");
		scanf("%i", &idade);
		if(idade < 5) {
			printf("Pode brincar no pula-pula e Casinha!");
		} else if(idade <  8) {
			printf("Pode brincar na prancha do pirata e piscina de bolinhas!");
		} else {
			printf("Pode brincar de pebolim, ping-pong e basquete!");
		}
	} else {
		printf("Voce � muito grande pra entrar no parque!");
	}
	*/

	// Exerc�cio 2
	/*
	int semestre;

	printf("Insira em que semestre voce est�: ");
	scanf("%i", &semestre);

	if(semestre >= 7) {
		  printf("[1] - Matricular na disciplinas de jogos digitais\n[2] - Matricular nadisciplina de Design de Jogos\n [3] - Matricular na disciplina de Realidade");
		  int opcao;
		  printf("Insira uma opcao: ");
		  scanf("%i", &opcao);
		  if(opcao == 1) {
				printf("Jogos Digitais confirmado");
			} else if(opcao == 2) {
				printf("Design confirmado");
			} else if(opcao == 3) {
				printf("RV confirmado");
			} else {
				printf("N�o existe essa op��o!");
		}
	} else {
		printf("Voc� ainda n�o pode se matricular em disciplinas optativas!");
	}

	*/
	// Exerc�cio 3
	/*
	char nacionalidade[30];

	printf("Insira sua nacionalidade: ");
	gets(nacionalidade);

	if ((strcmp(nacionalidade, "Brasileiro") == 0) || (strcmp(nacionalidade, "Brasileira") == 0))
	{
		char regiao[20];
		printf("Insira a regi�o em que voce nasceu: ");
		gets(regiao);

		if (strcmp(regiao, "sul") == 0)
		{
			printf("Voc� est� acostumado com o frio!");
		}
		else if (strcmp(regiao, "sudeste") == 0)
		{
			printf("Voce est� acostumado com chuva!");
		}
		else if (strcmp(regiao, "centro-oeste") == 0)
		{
			printf("Voce est� acostumado com clima abafado!");
		}
		else if (strcmp(regiao, "nordeste") == 0)
		{
			printf("Voc� est� acostumado com praias bonitas!");
		}
		else if (strcmp(regiao, "norte") == 0)
		{
			printf("Voce est� acostumado com chuvas no come�o da tarde!");
		}
		else
		{
			printf("N�o existe essa op��o!");
		}
	}
	else
	{
		printf("Seja bem vindo ao Brasil!");
	}
	*/

	// Exerc�cio 4

	/*
	int senha;
	printf("Insira sua senha: ");
	scanf("%i", &senha);

	int opcao;
	printf("[1] - Prioridade \n[2] - Aposentado \n[3] - Comum");

	if (senha > 100)
	{
		scanf("%i", &opcao);
		if (opcao == 1)
		{
			printf("Você será reagendado para amanhã");
		}
		else if (opcao == 2)
		{
			printf("VocÊ será reagendado para depois de amanhã!");
		}
		else if (opcao == 3)
		{
			printf("Você deve tentar outro dia!");
		}
	}
	else
	{
		printf("Aguarde para ser atendido!");
	}
	*/

	// Exercício 5

	int opcao;
	printf("[1] - Conversão de temperatura\n[2] - Conversão de distância");
	scanf("%i", &opcao);

	if (opcao == 1)
	{
		printf("[1] - Converter Celsius para Farenheit\n[2] - Converter Farenheit para Celsius\n[3] - ConverterCelsius para Kelvin");
		scanf("%i", &opcao);
		if (opcao == 1)
		{
			float celsius, farenheit;
			printf("Insira a temperatura em Celsius: ");
			scanf("%f", &celsius);

			farenheit = (9 * Celsius / 5) + 32;

			printf("Temperatura em Farenheit: %.2f", farenheit);
		}
		else if (opcao == 2)
		{
			float celsius, farenheit;
			printf("Insira a temperatura em Farenheit: ");
			scanf("%f", &farenheit);

			celsius = 5 * (farenheit - 32) / 9;

			printf("Temperatura em Celsius: %.2f", celsius);
		}
		else if (opcao == 3)
		{
			float celsius, kelvin;
			printf("Insira a temperatura em Celsius: ");
			scanf("%f", &celsius);

			kelvin = celsius + 273;

			printf("Temperatura em Kelvin: %.2f", kelvin);
		}
	}
	else if (opcao == 2)
	{
		printf("[1] - Converter km para milhas\n[2] - Converter milhas para km");
		scanf("%i", &opcao);
		if (opcao == 1)
		{
			float km, milhas;
			printf("Insira a distancia em km: ");

			scanf("%f", &km);

			milhas = km * 0.62137;

			printf("A distância em milhas:  %.2f", milhas);
		}
		else if (opcao == 2)
		{
			float km, milhas;
			printf("Insira a distancia em milhas: ");

			scanf("%f", &km);

			km = milhas / 0.62137;

			printf("A distância em km:  %.2f", km);
		}
		else
		{
			printf("Essa opção não existe!");
		}
	}
	else
	{
		printf("Não existe esta opção..");
	}

	return 0;
}
