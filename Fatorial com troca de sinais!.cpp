#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	printf("Esse algoritmo calcula 1+(1/1!)-(1/2!)+(1/3!)...+-(1/N!)\n");
	int n,j,g,fat;
	float soma,acum;
	printf("Informe um n�mero:\n");
	scanf("%d",&n);
	soma=2;
	while(n>1)
	{
	j=n;
	g=n;
	for(fat=1;j>1;j=j-1)
	{
		fat=fat*j;
	}
	acum=fat;
	if(g%2==0)
	soma=soma-(1/acum);
	else
	soma=soma+(1/acum);
	n--;
	}
	printf("Solu��o � = %.10f",soma);	
}

