#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int a1,a2,cont;
	a1=150;
	a2=110;
	cont=1;
	for(cont=1;a2<a1;cont++)
	{
		a1=a1+2;
		a2=a2+3;
	}
	printf("Ser�o necess�rios %d anos para Chico ser maior que Z�",cont);
}
