/*Construa uma fun��o que receba tr�s valores, a, b e c, retorne (passagem por
refer�ncia) o MAIOR e o MENOR valor desses tr�s. Deve ser criado um programa
para utilizar essa fun��o, lendo os tr�s valores e imprimindo o maior e o menor valor
computado.*/
#include <stdio.h>
int comp(int a,int b, int c, int *maior, int *menor)
{
	if (a>=b && a>=c)
		*maior=a;
	
	else 
		*menor=a;
	
	if (b>=a && b>=c)
		*maior=b;
	
	else 
		*menor=b;
	
	if (c>=a && c>=b)
		*maior=c;
	
	else 
		*menor=c;
	
} 
int main(){
 
 int A, B, C, Ma, Me;
 
 printf("\nInforme o primeiro valor:");
 scanf("%d", &A);
 printf("\nInforme o segundo valor:");
 scanf("%d", &B);
 printf("\nInforme o terceiro valor:");
 scanf("%d", &C);
 comp(A, B,C,&Ma , &Me);
 printf("O maior eh: %d", Ma);
 printf(" O menor eh: %d", Me);
 	
}
