#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
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
	printf("Soma de todos os elementos da matriz é = %d\n",soma);
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
	printf("Soma da linha 4 é = %d\n",soma);
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
	printf("Soma da coluna 2 é = %d\n",soma);
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
	printf("Soma da diagonal principal é = %d\n",soma);
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
	printf("Soma da diagonal secundária é = %d",soma);
}
