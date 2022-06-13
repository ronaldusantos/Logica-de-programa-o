/*Calcular a média final (usando a ponderação da UFRN) dadas as notas das 3 provas e
produzir uma saída com a média e a situação do aluno de acordo com o seguinte critério:
média >= 7, aprovado; 3 <= média < 7, recuperação; média < 3, reprovado. 

Considerar também o número de faltas do aluno: se forem mais que sete faltas, o aluno estará
automaticamente reprovado (o usuário deve fornecer o numero de faltas). 

Se o aluno se encontrar em recuperação, solicitar a nota da quarta prova e, após calcular a media final,
informar se o aluno passou (media final >=5) ou não.*/

#include <stdio.h>

    int main(){
    float nt1, nt2, nt3, media;

    printf("Digite a nota da primeira prova : ");
    scanf("%f", &nt1);
    printf("\nDigite a nota da segunda prova : ");
    scanf("%f", &nt2);
    printf("\nDigite a nota da terceira prova : ");
    scanf("%f", &nt3);

    media = (nt1 + nt2 + nt3) /3;
        printf("\nA media do aluno eh : %1.1f\n", media);

                if (media >=7 )
                    printf("\nAluno Aprovado !!\n\n ");
 
                      else if(5 < media < 7)
                          printf("\nAluno de Recuperacao !!\n\n ");
                              else
                                  printf("\nAluno Reprovado !!\n\n ");

    	system("Pause");
      } 
