#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int x[5],i=0;
	do
	{
		printf("Informe um n�mero: \n");
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
