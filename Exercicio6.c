#include <stdio.h>
/*Escreva um programa em C para validar um lote de cheques. O programa deverá inicialmente
solicitar a soma do lote e o número de cheques. A seguir deverá ler o valor de cada cheque
calculando a soma total. Após a digitação de todos os cheques o programa deverá imprimir as
seguintes mensagens: LOTE Ok se a soma informada for igual a soma calculada. Diferença
negativa se a soma calculada for menor que a informada. Diferença positiva se a soma
calculada for maior que a informada. Observação: O valor da diferença deve ser impresso
(caso exista).*/
int main()
{	
	int lote,valori,i,valorc,dif,cheq;
	
	lote=valori=valorc=dif=cheq=0;
	i=1;
	
	printf("informe o valor total dos cheques\n");
	scanf("%d",&valori);
		
	printf("informe a quantidade de cheques\n");
	scanf("%d",&lote);
	
	for(i=1;lote>=i;++i)
	{
		printf("Informe o valor do cheque numero:%i\n",i);
		scanf("%i",&cheq);
		valorc+=cheq;
	}
	
	dif=(valori-valorc);
	
	//printf("%i",dif);
	
	
	if (dif>0)
	printf("Diferenca positiva de:%i",dif);
	
	if (dif<0)
	printf("Diferenca negativa de:%i",dif);
	

    else
	
	printf("Lote OK");

	return 0;	
}

