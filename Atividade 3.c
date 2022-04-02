#include<stdio.h>

main(){
       int valor1, valor2;
              
       while(valor2 != valor1){
       printf("informe o valor 1: ");
       scanf("%d", &valor1);
       printf("informe o valor 2: ");
       scanf("%d", &valor2);
       }
       if(valor2 > valor1){
             printf("o mumero digitado e maior que o valor 1");
       }
       if(valor2 < valor1){
             printf("o mumero digitado e menor que o valor 1"); 
       }             
       if(valor2 == valor1){
             printf("Parabens voce acertou");
       }
}
       
