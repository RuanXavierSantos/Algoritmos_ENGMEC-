#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int m[5][5],i,j,soma;
	i=0;
	j=0;
	soma=0;
	//Recebe a Matriz e E
	do
	{
		do
		{
			printf("Informe o termo %d.%d: ",i,j);
			scanf("%d",&m[i][j]);
			soma=soma+m[i][j];
			j++;
		}
		while(j<5);
		i++;
		j=0;
	}
	while(i<5); 
	printf("Soma de todos os elementos da matriz � = %d\n",soma);
	//A
	soma=0;	
	j=0;
	i=3;
	do
	{
		soma=soma+m[i][j];
		j++;
	}
	while(j<5);
	printf("Soma da linha 4 � = %d\n",soma);
	//B
	j=1;
	i=0;
	soma=0;
	do
	{
		soma=soma+m[i][j];
		i++;
	}
	while(i<5);
	printf("Soma da coluna 2 � = %d\n",soma);
	//C
	i=0;
	j=0;
	soma=0;
	do
	{
		soma=soma+m[i][j];
		i++;
		j++;
	}
	while(i<5);
	printf("Soma da diagonal principal � = %d\n",soma);
	//D
	i=0;
	j=4;
	soma=0;
	do
	{
		soma=soma+m[i][j];
		j--;
		i++;
	}
	while(j>=0);
	printf("Soma da diagonal secund�ria � = %d",soma);
}
