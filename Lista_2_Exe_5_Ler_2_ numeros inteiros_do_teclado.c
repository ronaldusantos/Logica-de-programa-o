/* Ler 2 n�meros inteiros do teclado. Se o segundo for diferente de zero, 
calcular e imprimir o quociente do primeiro pelo segundo. 
Caso contr�rio, imprimir a mensagem: �DIVIS�O POR ZERO�.*/

#include<stdio.h>

    int main() {
    int x, y, resul;

     printf("Informe o primeiro numero : ");
     scanf("%d", &x);
     printf("\nInforme o segundo numero : ");
     scanf("%d", &y);

   if(y == 0)
           printf("\nDIVISAO POR ZERO\n\n");
              else{
                resul = (x / y);

                  printf("\nO quociente eh : %d\n\n", resul);}

    system("Pause");
    
    }
