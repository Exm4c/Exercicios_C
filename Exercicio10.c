#include<stdio.h>
/*Fa�a uma fun��o que receba um n�mero inteiro e positivo N como par�metro e
retorne a soma dos N n�meros inteiros existentes entre o n�mero 1 e esse n�mero.
O programa principal dever� ler as entradas e imprimir os resultados.*/

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
