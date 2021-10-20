#include<stdlib.h>
#include<stdio.h>
main()
{
	int x,y;
	printf("Informe os dois valores\n");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		printf("%d %d",y,x);
	}
	else if(y>x)
	{
		printf("%d %d",x,y);
	}
	else if(x==y)
	{
		printf("Os numeros sao iguais");
	}
}
