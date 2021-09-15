/*Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos.
Quando o usuário entrar com um valor negativo o programa pára de pedir valores e calcula a
média dos valores já fornecidos.*/
#include <stdio.h>
int main ()
{	
	int val,soma,c;
	float med;
	
	val=soma=med=0;
	c=1;
	
		do
		 {
		  printf("Digite o valor numero ");
		  scanf("%d",&val);		  
		  soma+=val;
		  ++c;
		  
		  } while (val>=0);
		med=soma/c;
		printf("\n A media dos numeros digitados e %f",med);
}
