#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	float a1,a2;
	int h;
	a1=1.5;
	a2=1.1;
	h=0;
	while(a1>a2)
	{
		a1=a1+0.02;
		a2=a2+0.03;
		h++;		
	}
	printf("Serão necessários %d anos para Chico ser maior que Zé",h);	
}
