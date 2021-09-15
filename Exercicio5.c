/*Escreva um programa em C que leia as notas das 2 avaliações normais e a nota da avaliação
optativa. Caso o aluno não tenha feito a optativa deve ser fornecido um valor negativo.
Calcular a média do semestre considerando que a prova optativa substitui a nota mais baixa
entre as 2 primeiras avaliações. Escrever a média e uma mensagem que indique se o aluno foi
aprovado, reprovado ou está em exame.*/
#include <stdio.h>

int main ()
{

	int nota1,nota2,opt,menor;
	float med,somanota;
	 
	menor=somanota=nota1=nota2=opt=med=0;
	
	printf("Avaliaçao 1 \n");
	scanf("%d", &nota1);
	printf("\nAvaliaçao 2\n");
	scanf("%d", &nota2);
	printf("\nOptativa \n");
	scanf("%d",&opt);
		
	if (opt < 0)		
	{(opt=0);
		
		//
	}
	
	if ((opt>nota1)	or (opt>nota2));
	{
	if(nota1>nota2)
  	{
    	menor=nota2;
    	 }
  	
	else
  	{	
    	menor=nota1;
  		}
	if ((menor=nota1 and nota1<opt))
	{
	  nota1=opt;
			}
	else
	{if ((menor=nota2 and nota2<opt))
	 
	 nota2=opt;
		}
	}
		//if (opt>nota1);
		//nota1=opt;
		//opt=0;
		//if (opt>nota2)
		//nota2=opt; 
	
	somanota=nota1+nota2;
	med=somanota/2;
	
if (med<4)
{
printf("Reprovado\n");
}
 else
{if((med>4) and(med<7))
printf("Exame\n");

else (med>7)
;printf("Aprovado!\n");
}//	
	printf("Nota1 %i\nNota2 %i\nMed %f",nota1,nota2,med);
	
	
			
 return 0;
}




