#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int m,y,x,cont;
	cont=1;
	x=0;
	y=0;
	for(cont==1;cont<51;cont++)
	{
		printf("Informe um n�mero: \n");
		scanf("%d",&m);
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
	}
	printf("O maior n�mero �: %d\n",x);
	printf("O menor n�mero �: %d",y);
}
