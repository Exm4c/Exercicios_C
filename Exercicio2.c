#include <stdio.h>
/*2. Fa�a o seguinte programa em C: Solicitar ao usu�rio que este informe a quantidade de jogos
que foram realizados pela sua equipe no campeonato nacional. Para cada um dos jogos, solicitar a quantidade de gols marcados e a quantidade de gols sofridos. Exibir quantos jogos a
equipe do usu�rio ganhou, quantos perdeu e quantos empatou. Ainda para o time do usu�rio
em quest�o, exibir a m�dia de gols sofridos e a m�dia de gols marcados por jogo.*/

int main ()
{
  int golsf,golss,jogos,w,l,d,c,sfg,sfgs;
  float fg,fgs;
    
    golsf=golss=jogos=w=l=d=c=sfg=sfgs=0;
    
 	printf("Informe a quantidade de jogos " );
 	scanf("%d", &jogos);
 	for (c=1; jogos>= c; ++c)
 	{
		 	printf ("Informe os gols marcados no jogo %i \n",c);
 		scanf("%d", &golsf);
 		printf ("Informe os gols sofridos no jogo %i \n",c);
 		scanf("%d", &golss);
 		sfg+= golsf;
 		sfgs+= golss;
 	    if (golsf>golss)
 	    	++w;
 	    if (golsf<golss)
		    ++l;
 	    if (golsf=golss)
		    ++d;
	    
		}
	
    fg=sfg/jogos;
	fgs=sfgs/jogos;
	
	printf("A equipe ganhou %i \n A equipe perdeu %i \n A equipe empatou %i \n A m�dia de gols feitos e %f \n A m�dia de gols sofridos e %f",w,l,d,fg,fgs);
	     
        
	
	return 0;	
}
