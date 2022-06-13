/*Que informe se um dado ano é ou não bissexto. Obs: um ano é bissexto se ele for divisível
por 400 ou se ele for divisível por 4 e não por 100.*/

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
