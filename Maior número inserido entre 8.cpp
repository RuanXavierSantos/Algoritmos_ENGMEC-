#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int cont,x,m;
	cont=0;
	printf("Informe um número: \n");
	scanf("%d",&x);
	for(cont==0;cont<8;cont++)
	{
		printf("Informe um número: \n");
		scanf("%d",&m);
		if(x<m)
			x=m;
		else 
			x=x;
	}
	printf("O maior numero é: %d",x);
}
