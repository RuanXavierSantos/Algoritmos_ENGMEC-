#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int cont,y,n;
	float m,b,j;
	n=0;
	y=0;
	for(cont=0;n>=0;cont++)
	{
		printf("Informe os valores inteiros\n");
		scanf("%d",&n);
		if(n>=0)
		{
			y=y+n;
		}
		else
		printf("Valor negativo, fim do programa!!!!\n");
			b=y;
	j=cont;
	}
	m=b/j;
	printf("M�dia �: %.2f",m);
}

