/*Fa�a uma fun��o que calcule a m�dia aritm�tica de um vetor inteiro passado como
par�metro. O programa principal dever� ler as entradas e imprimir os resultados.
Dica: passe tamb�m como par�metro a quantidade de elementos a serem
considerados.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(float tot, int v /* float *total,*/ ){
	float div=v;
	tot=tot/div;
	
	printf("%.2f\ntot",tot);
	printf("%.2f\ndiv",div);
	
			
	
}


int main(){
	
	float *Pontmedia;
	int i;
	int v;
	float total;
	
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d", &v);
	Pontmedia=(float *)malloc(v * sizeof(float));
	printf("Digite os numeros do vetor: ");
	
	for (i=0;i<v;i++){
	
		scanf("%f",&Pontmedia[i]);
		total+=Pontmedia[i];
	}
	
	media(total, v);
		
	for (i=0;i<v;i++)
		printf("%f\n",Pontmedia[i]);
	    printf("%f\n",total);	
}
