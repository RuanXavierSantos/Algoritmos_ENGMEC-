#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int m,y,x,cont;
	cont=1;
	x=0;
	y=0;
	for(cont==1;cont<51;cont++)
	{
		printf("Informe um número: \n");
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
	printf("O maior número é: %d\n",x);
	printf("O menor número é: %d",y);
}
