#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int x,g[15],i=0,m;
	printf("Informe um n�mero: ");
	scanf("%d",&g[i]);
	m=g[i];
	i++;
	do
	{
		printf("Informe um n�mero: ");
		scanf("%d",&g[i]);
		if(m>g[i])
		m=g[i];
		else
		m=m;
		i++;
	}
	while(i<14);
	printf("Menor n�mero �: %d",m);	
}
