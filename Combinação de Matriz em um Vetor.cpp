#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int x[5],y[5],i=0;
	do
	{
		printf("Informe X: \n");
		scanf("%d",&x[i]);
		printf("Informe Y: \n");
		scanf("%d",&y[i]);
		i++;
	}
	while(i<5);
	printf("\n|||||||||||||||||||||||||||||Coloquei isso s� para ficar mais f�cil de ver a separa��o!|||||||||||||||||||||||||||||\n\n");
	i=0;
	do
	{
		printf("%d\n%d\n",x[i],y[i]);
		i++;
	}
	while(i<5);
}
