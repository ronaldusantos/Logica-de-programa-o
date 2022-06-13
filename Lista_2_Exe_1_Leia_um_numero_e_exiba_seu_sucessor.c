/*Leia um número e exiba seu sucessor.*/

#include <stdio.h>

int main()
{
	int num, sucessor;
	
	printf("Favor digitar um numero inteiro?\n");	
	scanf("%d",&num);
	
	sucessor = num + 1;
	
	printf("O numero sucessor eh: %d\n", sucessor);
	
}
