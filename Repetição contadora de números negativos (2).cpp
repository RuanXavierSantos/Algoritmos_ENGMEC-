#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int x,y,cont;
	x=1;
	y=0;
	printf("Digite 0 para parar o programa!\n");
	for(cont==1;x!=0;cont++)
	{
		printf("Informe um n�mero\n");
		scanf("%d",&x);
		if(x<0)
		{
			y++;
		}
		else
		printf("O n�mero digitado n�o � negativo :(\n");
	}
	printf("A quantidade de n�meros negativos �: %d",y);
}
