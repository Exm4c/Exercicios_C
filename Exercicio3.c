/*Fazer um programa no qual o usu�rio vai entrando sucessivamente com valores positivos.
Quando o usu�rio entrar com um valor negativo o programa p�ra de pedir valores e calcula a
m�dia dos valores j� fornecidos.*/
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
