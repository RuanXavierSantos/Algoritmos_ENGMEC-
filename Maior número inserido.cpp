#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int cont=0;
	float x,m,y;	
	x=0;
	y=0;
	do
	{
		printf("Informe um n�mero: \n");
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
	printf("O maior n�mero �: %.0f\n",x);
	printf("O menor n�mero �: %.0f",y);
}
