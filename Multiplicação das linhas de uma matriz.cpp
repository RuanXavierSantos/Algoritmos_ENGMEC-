#include<stdio.h>
#define m 8
#define n 3
main()
{
	int k[n][m],i,j,d[n]={1,1,1};
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
	j=0;
	i=0;
	do
	{
	do
	{
		d[i]=d[i]*k[i][j];
		j++;
	}
	while(j<m);
	j=0;
	i++;
	}
	while(i<n);
	i=0;
	printf("Multiplicacao das linhas: \n");
	do
	{
		printf("%d\n",d[i]);
		i++;
	}
	while(i<n);
}
