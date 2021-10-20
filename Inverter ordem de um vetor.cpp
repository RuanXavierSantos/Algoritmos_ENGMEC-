#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int x[5],i=0;
	do
	{
		printf("Informe um número: \n");
		scanf("%d",&x[i]);
		i++;
	}
	while(i<5);
	i--;
	do
	{
		printf("%d\n",x[i]);
		i--;
	}
	while(i>=0);
}
