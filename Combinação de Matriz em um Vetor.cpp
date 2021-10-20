#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
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
	printf("\n|||||||||||||||||||||||||||||Coloquei isso só para ficar mais fácil de ver a separação!|||||||||||||||||||||||||||||\n\n");
	i=0;
	do
	{
		printf("%d\n%d\n",x[i],y[i]);
		i++;
	}
	while(i<5);
}
