#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int n;
	float m,x,y; //O C++ tem problemas de dividir real por inteiro, por isso declarei uma variável para receber o contador(cont)
	y=0;
	x=0;
	n=0;
	while(n>=0)
	{
		printf("Informe os valores inteiros\n");
		scanf("%d",&n);
		if(n>=0){
		y=y+n;
		x++;}
		else
		printf("Valor negativo!!!!\n");
	}
	m=y/x;
	printf("Média é: %.2f",m);
}
