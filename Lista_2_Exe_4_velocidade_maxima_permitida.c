/*Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista
estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são
pagos: 
a) 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida
(ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); 
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. 
c) 200 reais, se estiver acima de 31km/h da velocidade permitida.*/

#include<stdio.h>
 
 
 
   int main(){
       int vel,vel_per;
       
       printf(" Digite a velocidade maxima permitida :\n");
       scanf("%d",&vel_per);
         printf("  Digite a velocidade em que o motorista esta  :\n");
            scanf("%d",&vel);
           
           
              if(vel==vel_per+10){
                                  printf(" O Motorista foi multado em R$ 50,00 Reais \n\n");
                                  }
                                 else if(vel>=vel_per+11 && vel<= vel_per+30){
                                printf(" O Motorista foi multado em R$ 100,00 Reais \n\n ");
           
            }
       else if(vel>=vel_per+31){
             printf(" O Motorista foi multado em R$ 200,00 Reais \n\n");
       
       }
       else if(vel==vel_per || vel<vel_per+10){
                         
        printf(" Velocidade Ok!! \n\n");
        }
    }
