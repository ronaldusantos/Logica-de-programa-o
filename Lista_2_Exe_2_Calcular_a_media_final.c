/*Calcular a m�dia final (usando a pondera��o da UFRN) dadas as notas das 3 provas e
produzir uma sa�da com a m�dia e a situa��o do aluno de acordo com o seguinte crit�rio:
m�dia >= 7, aprovado; 3 <= m�dia < 7, recupera��o; m�dia < 3, reprovado. 

Considerar tamb�m o n�mero de faltas do aluno: se forem mais que sete faltas, o aluno estar�
automaticamente reprovado (o usu�rio deve fornecer o numero de faltas). 

Se o aluno se encontrar em recupera��o, solicitar a nota da quarta prova e, ap�s calcular a media final,
informar se o aluno passou (media final >=5) ou n�o.*/

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
