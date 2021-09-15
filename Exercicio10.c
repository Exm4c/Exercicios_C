#include<stdio.h>
/*Faça uma função que receba um número inteiro e positivo N como parâmetro e
retorne a soma dos N números inteiros existentes entre o número 1 e esse número.
O programa principal deverá ler as entradas e imprimir os resultados.*/

int main(){
 int soma(int N,int *Ene);
	
 
 int A,Ene;
 
 printf("\nInforme o valor:");
 scanf("%d", &A);
 soma(A, &Ene);
 printf("A soma eh:%d,%i", Ene,*Ene);
 	
}
int soma(int N,int *Ene)
{   int perpend=1,soma=0;

	for (perpend=1;perpend<=N;perpend++)
	{	soma+=perpend;
	 } 
	*Ene=soma;
	
	
} 
