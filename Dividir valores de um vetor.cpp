#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int g[5],i=0,m,soma=0,n;
	float p,k;
	printf("Informe um n�mero: ");
	scanf("%d",&g[i]);
	soma=g[i];
	m=g[i];
	i++;
	do
	{
		printf("Informe um n�mero: ");
		scanf("%d",&g[i]);
		soma=soma+g[i];
		if(m<=g[i])
		m=g[i];
		else
		m=m;
		i++;		
	}
	while(i<5);
	p=soma;
	k=m;
	n=p/k;
	printf("Resultado �: %.2f",n);
}
