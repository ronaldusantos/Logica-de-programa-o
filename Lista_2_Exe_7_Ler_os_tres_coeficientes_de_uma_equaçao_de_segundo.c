/*Ler os três coeficientes de uma equação de segundo grau e determinar suas raízes.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
            float a, b, c, d, raiz_delta;
            float x1, x2;

printf("Este programa calcula as raizes da equacao do segundo grau ");
             printf("ax2+Bx+C = 0\n");
             printf("\nEntre com o valor do coeficiente a: ");
             scanf("%f",&a);
             printf("\nEntre com o valor do coeficiente b: ");
             scanf("%f",&b);
                     printf("\nEntre com o termo independente: ");
            scanf("%f",&c);

    d=((b*b)-4*(a*c));

    printf("\nO valor de delta: %0.f\n",d);
        
               raiz_delta=pow(d/(2*a),1/2);

             if(d<0){
                 printf("\nNao existe raiz real\n\n");
              }
              else{
                 printf("A raiz delta de e: %0.f\n\n",raiz_delta);

             x1=((-b+raiz_delta)/2*a);
                     printf("A raiz X1 e %0.f: \n\n",x1);

                              x2=((-b-raiz_delta)/2*a);
                      printf("A raiz X2 e %0.f: \n\n",x2);
             }
            system("pause");
         }
