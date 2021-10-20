#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int x,cont,m;
	cont=1;
	m=0;
	x=1;
	for(cont==1;x!=0;cont++)
	{
		printf("Informe um Número!\n");
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
	printf("O maior número é: %d",m);
}

