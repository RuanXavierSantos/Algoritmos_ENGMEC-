#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	float mdsl,mdfl,sl,totalsl,totalfls,percentualpobre,percentualrico,maiorsl;
	int entrevistados,prc,fls,pobre;
	entrevistados=0;
	prc=0;
	pobre=0;
	totalfls=0;
	totalsl=0;
	printf("Informe o salário do entrevisrado: \n");
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
		printf("Informe o número de filhos do entrevistado: \n");
		scanf("%d",&fls);
		totalfls=totalfls+fls;
		printf("Informe o salário do entrevisrado: \n");
		scanf("%f",&sl);		
	}
	mdsl=totalsl/entrevistados;
	mdfl=totalfls/entrevistados;
	percentualpobre=(100/entrevistados)*pobre;
	percentualrico=(100-percentualpobre);
	printf("A média salarial é: %.2f\nA média de filhos é: %.0f\nO percentual de pessoas que ganham salário menor ou igual a mil reias é: %.2f PorC\nO percentual de pessoas que ganham mais de mil reais é: %.2f PorC\nO maior salário é: %.0f\nO número de entrevistados é: %d\n",mdsl,mdfl,percentualpobre,percentualrico,maiorsl,entrevistados);	
}
