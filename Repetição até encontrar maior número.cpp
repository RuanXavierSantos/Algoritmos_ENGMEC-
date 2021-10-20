#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	float x,m;
	m=0;
	do
	{
		printf("Informe um número: \n");
		scanf("%f",&x);
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
	while(x!=0);
	printf("O maior número é %.2f",m);
}
