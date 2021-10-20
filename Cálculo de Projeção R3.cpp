#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int g[3],r[3],i,j,somaa,somab,p[3];
	i=1;
	j=0;
	somaa=0;
	somab=0;
	printf("\n\n\n                    A     S\n");
	printf("                         S\n");
	printf("                        S\n");
	printf("                       S\n");
	printf("                      S\n");
	printf("                     SSSSSSSSSSSSSS\n\n");
	printf("                             B \n\n\n");
	do
	{
		printf("Informe %dº termo do vetor A: ",i);
		scanf("%d",&g[j]);
		i++;
		j++;
	}
	while(j<3);
	i=1;
	j=0;
	do
	{
		printf("Informe %dº termo do vetor B: ",i);
		scanf("%d",&r[j]);
		i++;
		j++;
	}
	while(j<3);
	j=0;
	do
	{
		somaa=somaa+g[j]*r[j];
		j++;		
	}
	while(j<3);
	j=0;
	do
	{
		somab=somab+r[j]*r[j];
		j++;		
	}
	while(j<3);
	j=0;
	do
	{
		p[j]=r[j]*somaa;
		j++;
	}
	while(j<3);	
	printf("\n\nProjeção do vetor A no vetor B é = {  %d/%d  ,  %d/%d  ,  %d/%d  }",p[0],somab,p[1],somab,p[2],somab);
}
