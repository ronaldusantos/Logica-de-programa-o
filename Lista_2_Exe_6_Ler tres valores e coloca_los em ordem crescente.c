/*Ler três valores e colocá-los em ordem crescente.*/

#include<stdio.h>

      int main() {
      int a, b, c;

        printf("O primeiro numero : ");
        scanf("%d", &a);
        printf("\nO segundo numero : ");
        scanf("%d", &b);
        printf("\nO terceiro numero : ");
        scanf("%d", &c);
     
           if(a > b && c)
                printf("\nO primeiro numero eh o maior !!\n\n");
          else if(b > a && c)
              printf("\nO segundo numero eh o maior !!\n\n");

      else
              printf("\nO terceiro numero eh o maior !!\n\n");

        system("Pause");
    }
