#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
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
	printf("Ser�o necess�rios %d anos para Chico ser maior que Z�",h);	
}
