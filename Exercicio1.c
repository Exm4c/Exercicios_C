/*Escreva uma fun��o que receba dois n�meros inteiros x e y. Essa fun��o deve
verificar se x � divis�vel por y. No caso positivo, a fun��o deve retornar 1, caso
contr�rio zero. Escreva um programa para testar essa fun��o. */

#include <stdio.h>
int div( )
{ 
 	int X, Y, R;
 	printf("\nInforme o primeiro valor:");
 	scanf("%d", &X);
 	printf("\nInforme o segundo valor:");
 	scanf("%d", &Y);
 	
	if ( X % Y==0)
 		R=1;
 	else 
 	    R=0;
 	return (R);
}
	int main()
{
 	int res;
 	res=div();
  	if (res==1){
 	printf("Positivo");
 	}	

    else {
	
    printf("Negativo");
	}
}
