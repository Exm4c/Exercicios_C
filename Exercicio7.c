#include <stdio.h>
#include<ctype.h>
#include<string.h>

/*Fa�a um programa para corrigir provas de m�ltipla escolha. Cada prova
tem oito quest�es, e cada quest�o vale um ponto, exceto as quest�es 3 e
8 que valem 2.0 pontos cada uma. O primeiro conjunto de dados a ser
lido � o gabarito da prova. Os outros dados s�o os n�meros dos alunos, e
as respostas que deram �s quest�es. Existem 10 alunos matriculados.
Calcule e mostre o n�mero e a nota de cada aluno*/

int main (){
	char gabarito[9];
	char aluno[9];
	int acertosal[10]={0,0,0,0,0,0,0,0,0,0};
	int ia[11];
	int i,j,ind,o,al;
	
	o=0;
	al=1;
	
	
	printf("Informe o gabarito das prova\n");
	scanf("%s",gabarito);
	for (ind=1;ind<11;ind++){
		printf("Informe as respostas do aluno:%i\n",ind);/*aluno indice i*/
		scanf("%s",aluno);
	
		
		for(j=0;j<9;j++){			
			if(gabarito[j] == aluno[i])		
 				{
 				acertosal[al]++;
 				al++;
				}
			i++;
			al++;
	
			}		
	}
	printf("Notas dos alunos\n");
	for (ind=1;ind<11;ind++){
	   printf("Nota aluno %i: %i\n",ind,acertosal[ind]);
	}
}
