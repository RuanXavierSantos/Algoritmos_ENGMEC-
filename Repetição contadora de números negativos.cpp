#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	float x,y=0;
	printf("Digite 0 para parar o programa!\n");
	do
	{
		printf("Informe um número\n");
		scanf("%f",&x);
		if(x<0)
		{
			y++;
		}
		else
		printf("O número digitado não é negativo :(\n");
	}
	while(x!=0);
	printf("A quantidade de números negativos é: %.0f",y);
}
