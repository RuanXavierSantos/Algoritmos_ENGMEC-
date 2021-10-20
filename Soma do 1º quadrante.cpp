#include<stdio.h>
main()
{
	//Para vocês entenderem: Tam é o tamanho da matriz que vc colocar
	int m[5][5],i,j,n,soma;
	i=0;
	j=0;
	soma=0;
	n=3;//Tam-2
	//parte q recebe a matriz
	printf("D O O O D\n");
	printf("X D O D X\n");
	printf("X X D X X\n");
	printf("X D X D X\n");
	printf("D X X X D\n");
	printf("onde tem O eh que vai ser somado!!!!!!!!\n\n");
	do
	{
		do
		{
			printf("Informe o termo %d.%d: ",i,j);
			scanf("%d",&m[i][j]);
			j++;
		}
		while(j<5);//Na frente do < vc coloca o tamanho da matriz (j) q foi declarada no int
		i++;
		j=0;
	}
	while(i<5);//Na frente do < vc coloca o tamanho da matriz (i) q foi declarada no int
	//aqui a mágica começa
	i=0;
	j=1;
	do
	{
		do
		{
			soma=soma+m[i][j];
			j++;
		}
		while(j<=n);
		j=j-2;//A cada Dois que aumenta do tamanho da matriz, aumenta um aqui, blz? Exemplo, na 5x5 é 2, na 7x7 será 3
		i++;
		n--;
	}
	while(i<2);//A cada Dois que aumenta do tamanho da matriz, aumenta um aqui, blz? Exemplo, na 5x5 é 2, na 7x7 será 3
	printf("Soma eh = %d",soma);
}
