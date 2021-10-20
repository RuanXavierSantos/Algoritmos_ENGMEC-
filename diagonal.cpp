#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int k[100][100],i,j,m,n;
	i=0;
	j=0;
	printf("Informe a quantidade de linhas:");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas:");
	scanf("%d",&m);
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
	printf("A diagonal da matriz eh: \n");
	i=0;
	j=0;
	do
	{
		printf("%d       ",k[i][j]);
		i++;
		j++;
	}
	while(i<n && j<m); 
	
}
