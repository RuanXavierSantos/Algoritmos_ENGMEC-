#include<math.h>
#include<stdio.h>
main()
{
	int x,y,w;
	printf("Informe o numero: ");
	scanf("%d",&x);
	printf("Informe o expoente: ");
	scanf("%d",&y);
	w=pow(x,y);
	printf("Resutado = %d",w);
	
}
