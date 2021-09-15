#include <stdio.h>
/*2. Faça o seguinte programa em C: Solicitar ao usuário que este informe a quantidade de jogos
que foram realizados pela sua equipe no campeonato nacional. Para cada um dos jogos, solicitar a quantidade de gols marcados e a quantidade de gols sofridos. Exibir quantos jogos a
equipe do usuário ganhou, quantos perdeu e quantos empatou. Ainda para o time do usuário
em questão, exibir a média de gols sofridos e a média de gols marcados por jogo.*/

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
	
	printf("A equipe ganhou %i \n A equipe perdeu %i \n A equipe empatou %i \n A média de gols feitos e %f \n A média de gols sofridos e %f",w,l,d,fg,fgs);
	     
        
	
	return 0;	
}
