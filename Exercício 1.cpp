#include<stdio.h>
#include<stdlib.h>
main()
{
	float x,y;
	printf("Informe os dois numeros\n");
	scanf("%f %f",&x,&y);
	if(x+y>30)
	{
		printf("Soma eh maior que 30");
	}
	else if(x+y<30)
	{
	printf("Soma eh menor que 30");
	}
	else if(x+y==30)
	{
	printf("Soma eh igual a 30");
	}
}
