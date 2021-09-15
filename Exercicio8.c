/*Escreva uma função que receba dois números inteiros x e y. Essa função deve
verificar se x é divisível por y. No caso positivo, a função deve retornar 1, caso
contrário zero. Escreva um programa para testar essa função. */

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
