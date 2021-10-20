#include<stdio.h>
main()
{
	int fat,j;
	printf("Informe o numero para calcular a fatorial: ");
	scanf("%d",&j);
	for(fat=1;j>1;j--)
	{
		fat=fat*j;
	}
	printf("Fatorial eh = %d",fat);
	
}
