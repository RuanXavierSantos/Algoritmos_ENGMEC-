#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	printf("Esse algoritmo calcula 1+(1/1)-(1/2)+(1/3)...+-(1/N)\n");
	int n,fat;
	float soma,g,acum;
	printf("Informe um n�mero:\n");
	scanf("%d",&n);
	soma=0.5;
	while(n>2)
	{
	g=n;//Para evitar dar bug, s� divide real por real!!!!!!!!!
	if(n%2==0)
	soma=soma-(1/g);
	else
	soma=soma+(1/g);
	n--;
	}
	printf("Solu��o � = %.10f",soma);	
}
