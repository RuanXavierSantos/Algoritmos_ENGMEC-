#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	float mdsl,mdfl,sl,totalsl,totalfls,percentualpobre,percentualrico,maiorsl;
	int entrevistados,prc,fls,pobre;
	entrevistados=0;
	prc=0;
	pobre=0;
	totalfls=0;
	totalsl=0;
	printf("Informe o sal�rio do entrevisrado: \n");
	scanf("%f",&sl);
	maiorsl=sl;
	while(sl>0)
	{
		if(sl>=maiorsl)
		{
			maiorsl=sl;
		}
		else if(sl<maiorsl)
		{
			maiorsl=maiorsl;
		}
		entrevistados++;
		if(sl<=1000)
		{
			pobre++;
		}
		else if(sl>1000)
		{
			prc++;
		}
		totalsl=totalsl+sl;
		printf("Informe o n�mero de filhos do entrevistado: \n");
		scanf("%d",&fls);
		totalfls=totalfls+fls;
		printf("Informe o sal�rio do entrevisrado: \n");
		scanf("%f",&sl);		
	}
	mdsl=totalsl/entrevistados;
	mdfl=totalfls/entrevistados;
	percentualpobre=(100/entrevistados)*pobre;
	percentualrico=(100-percentualpobre);
	printf("A m�dia salarial �: %.2f\nA m�dia de filhos �: %.0f\nO percentual de pessoas que ganham sal�rio menor ou igual a mil reias �: %.2f PorC\nO percentual de pessoas que ganham mais de mil reais �: %.2f PorC\nO maior sal�rio �: %.0f\nO n�mero de entrevistados �: %d\n",mdsl,mdfl,percentualpobre,percentualrico,maiorsl,entrevistados);	
}
