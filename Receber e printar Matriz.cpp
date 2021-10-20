#include <stdio.h>
#include <locale.h>
#define n 3
#define m 3
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int k[n][m],i,j;
	i=0;
	j=0;
	do
	{
		do
		{
			printf("Informe o termo %d.%d: ",i,j);
			scanf("%d",&k[i][j]);
			j++;
		}
		while(j<m);
		i++;
		j=0;
	}
	while(i<n); 
	//ate aqui a matriz foi lida
	printf("A matriz lida foi: \n");
	i=0;
	j=0;
	do
	{
		do
		{
			printf("%d  ",k[i][j]);
			j++;
		}
		while(j<m);
		printf("\n");
		i++;
		j=0;
	}
	while(i<n); 
	
}
