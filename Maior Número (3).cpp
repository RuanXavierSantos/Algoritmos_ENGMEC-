#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	float x,m;
	m=0;
	while(x!=0)
	{
		printf("Informe um n�mero: \n");
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
	printf("O maior n�mero �: %.2f",m);
	return 0;
}
