#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int x,cont,m;
	cont=1;
	m=0;
	x=1;
	for(cont==1;x!=0;cont++)
	{
		printf("Informe um N�mero!\n");
		scanf("%d",&x);
		if(m<x)
		{
			m=x;
		}
		else if(m>x)
		{
			m=m;
		}
		else if(m==x)
		{
			m=m;
		}	
	}
	printf("O maior n�mero �: %d",m);
}

