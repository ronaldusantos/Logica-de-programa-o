/*Calcular a quantidade dinheiro gasta por um fumante. Dados: o número de anos que ele
fuma, o nº de cigarros fumados por dia e o preço de uma carteira com 20 cigarros.*/

#include <stdio.h>

int main()
{
	int quantCigarro = 0;
	float precoCigarro = 0.0;
	int tempoFuma = 0;
	
	printf(" Quantas carteiras de cigarro voce fuma por dia?\n");	
	scanf("%d",&quantCigarro);
	printf("Qual o preco da carteira do cigarro? \n");
	scanf("%f",&precoCigarro);
	printf("A quantos anos voce eh fumante ? \n");
	scanf("%d",&tempoFuma);
	
	// gasto diario
	float gastoDia = quantCigarro * precoCigarro;
	float gastoTotal = (tempoFuma * 365) * gastoDia;
	
	printf("voce ja gastou %.2f com cigarros ",gastoTotal);
	
	return 0;
}
