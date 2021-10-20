#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
main()
{
	system("color F5");
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int g[2][2],r[3][3],i,j,l,soma;
	i=0;
	j=0;
	printf("Matriz 2x2 - 1\nMatriz 3x3 - 0\n");
	scanf("%d",&l);
	switch(l)
	{
		case 1:
			do
			{
				do
				{
					printf("Informe o termo %d.%d: ",i,j);
					scanf("%d",&g[i][j]);
					j++;
				}
				while(j<2);
				i++;
				j=0;
			}
			while(i<2);
			i=0;
			j=0;
			printf("\n");
			soma=(g[i][j]*g[i+1][j+1])-(g[i][j+1]*g[i+1][j]);
			printf("Determinantes = %d",soma);
		break;
		default:
			do
			{
				do
				{
					printf("Informe o termo %d.%d: ",i,j);
					scanf("%d",&r[i][j]);
					j++;
				}
				while(j<3);
				i++;
				j=0;
			}
			while(i<3);
			printf("\n");
			i=0;
			j=0;
			printf("\n");
			soma=((r[i][j]*r[i+1][j+1]*r[i+2][j+2])+(r[i][j+1]*r[i+1][j+2]*r[i+2][j])+(r[i][j+2]*r[i+1][j]*r[i+2][j+1]))-((r[i][j+1]*r[i+1][j]*r[i+2][j+2])+(r[i][j]*r[i+1][j+2]*r[i+2][j+1])+(r[i][j+2]*r[i+1][j+1]*r[i+2][j]));
			printf("Determinantes = %d",soma);
		break;
	}
}
