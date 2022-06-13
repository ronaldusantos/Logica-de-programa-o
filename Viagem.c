#include <stdio.h>

int main()
{
	float dinheiro = 280.0;
	float precoLitro = 7.5;
	float litros = dinheiro / precoLitro;
	
	printf("\nA quantidade de litros abastecido eh: %.2f L\n", litros);	
		
	float consumo = 12.0;
	float distancia = litros * consumo;
	
	printf("\nA distancia que voce pode percorrer eh %.2f km\n", distancia);
	return 0;
}
