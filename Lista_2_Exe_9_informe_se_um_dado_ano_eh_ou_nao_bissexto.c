/*Que informe se um dado ano � ou n�o bissexto. Obs: um ano � bissexto se ele for divis�vel
por 400 ou se ele for divis�vel por 4 e n�o por 100.*/

#include<stdio.h>

int main(){
     int ano;
      
       printf("Digite o ano : ");
         scanf("%d", &ano);

          if(ano % 100 == 0)
             printf("ESSE ANO NAO EH BISSEXTO : %d\n\n", ano);
          else
             printf("ESSE ANO EH BISSEXTO : %d\n\n", ano);
 
system("PAUSE");

}
