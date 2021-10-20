#include <stdio.h>
main()
{
	int cont_imp, num, g, y;
	g=1;
	y=0;
	cont_imp=0;
	do
	{
		printf("informe um numero: ");
		scanf("%d",&num);
		do
		{
			num=num-g;
			g=g+2;
			cont_imp++;
		}
		while(num>0);
		printf("Raiz quadrada do numero inserido eh: %d \n",cont_imp);
		cont_imp=0;
		g=1;
		y++;
	}
	while(y<10);//mudar aqui, se nao for 10
}
