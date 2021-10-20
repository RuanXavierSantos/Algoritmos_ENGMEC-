#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	printf("Informe um valor\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Vermelho");
		break;
		case 21:
			printf("Preta");
		break;
		case 2:
			printf("rosa");
		break;
		case 3:
			printf("branca");
		break;
		case 4:
			printf("violeta");
		break;
		case (5)...(7):
			printf("azul");
		break;
		case (8)...(20):
			printf("verde");
		break;
		case (22)...(24):
			printf("cinza");
		break;
		default:
			printf("cor indefinida");
	}
}
