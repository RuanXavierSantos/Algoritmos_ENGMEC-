#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int x,g[15],i=0,m;
	printf("Informe um número: ");
	scanf("%d",&g[i]);
	m=g[i];
	i++;
	do
	{
		printf("Informe um número: ");
		scanf("%d",&g[i]);
		if(m>g[i])
		m=g[i];
		else
		m=m;
		i++;
	}
	while(i<14);
	printf("Menor número é: %d",m);	
}
