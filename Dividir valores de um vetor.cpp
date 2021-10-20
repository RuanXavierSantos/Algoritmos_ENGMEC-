#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int g[5],i=0,m,soma=0,n;
	float p,k;
	printf("Informe um número: ");
	scanf("%d",&g[i]);
	soma=g[i];
	m=g[i];
	i++;
	do
	{
		printf("Informe um número: ");
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
	printf("Resultado é: %.2f",n);
}
