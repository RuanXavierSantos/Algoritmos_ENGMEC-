#include<stdio.h>
main()
{
	int a,b,r;
	printf("Informe a primeira variavel: ");
	scanf("%d",&a);
	printf("Informe a segunda variavel: ");
	scanf("%d",&b);
	do
	{
		r=a%b;
		a=b;
		b=r;
	}
	while(r!=0);
	printf("%d",a);
}
