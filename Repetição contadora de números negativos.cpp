#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	float x,y=0;
	printf("Digite 0 para parar o programa!\n");
	do
	{
		printf("Informe um n�mero\n");
		scanf("%f",&x);
		if(x<0)
		{
			y++;
		}
		else
		printf("O n�mero digitado n�o � negativo :(\n");
	}
	while(x!=0);
	printf("A quantidade de n�meros negativos �: %.0f",y);
}
