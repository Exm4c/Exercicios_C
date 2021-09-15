#include <stdio.h>
/*Faca um programa que receba dois numeros X e Y, sendo X < Y. Calcule e mostre:
„h a soma dos numeros pares desse intervalo de numeros, incluindo os numeros digitados;
„h a multiplicacao dos numeros impares desse intervalo, incluindo os digitados*/
int main ()
{	
int X,Y,somapar,multimp,a,par,impar,vse;
	
	printf("Digite dois valores ");
		scanf("%d",&X);
		scanf("%d",&Y);
	
	a=Y;
	impar=1;
	par=0;
	if (X>Y)
		{
		 Y=X;X=a;
		 }
    
	for (a=X; a<=Y;a++)
	
	 {	vse=a;
	  if ((vse%2==0))
	   par+=vse;	   	
	  if ((vse%2==1))
	   impar*=vse;
	   	 	
	 }
		 
	printf("X e %i , Y e %i e a %i \nA soma dos pares %i \nA mult dos impares %i" ,X,Y,a,par,impar);
	
	
	return 0;
}
