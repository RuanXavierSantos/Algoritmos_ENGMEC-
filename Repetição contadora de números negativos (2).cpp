#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int x,y,cont;
	x=1;
	y=0;
	printf("Digite 0 para parar o programa!\n");
	for(cont==1;x!=0;cont++)
	{
		printf("Informe um número\n");
		scanf("%d",&x);
		if(x<0)
		{
			y++;
		}
		else
		printf("O número digitado não é negativo :(\n");
	}
	printf("A quantidade de números negativos é: %d",y);
}
