#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int cont=0;
	float x,m,y;	
	x=0;
	y=0;
	do
	{
		printf("Informe um número: \n");
		scanf("%f",&m);
		if(m>x)
		{
			x=m;
		}
		else if(m<x)
		{
			x=x;
		}
		else if(x==m)
		{
			x=x;
		}
		if(m<y)
		{
			y=m;
		}
		else if(m>y&&y!=0)
		{
			y=y;
		}
		else if(m>y&&y==0)
		{
			y=m;
		}
		else if(m==y)
		{
			y=y;
		}	
		cont++;		
	}
	while(cont<10);
	printf("O maior número é: %.0f\n",x);
	printf("O menor número é: %.0f",y);
}
