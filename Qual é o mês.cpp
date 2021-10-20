#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int x;
	char mes[15];
	printf("Informe um valor\n");
	scanf("%d",&x);
	switch(x){
	case 1:
		strcpy(mes,"janeiro");
			break;
	case 2:
		strcpy(mes,"fevereiro");
			break;
	case 3:
		strcpy(mes,"marco");
			break;
	case 4:
		strcpy(mes,"abril");
			break;
	case 5:
		strcpy(mes,"maio");
			break;
	case 6:
		strcpy(mes,"junho");
			break;
	case 7:
		strcpy(mes,"julho");
			break;
	case 8:
		strcpy(mes,"agosto");
			break;
	case 9:
		strcpy(mes,"setembro");
			break;
	case 10:
		strcpy(mes,"outubro");
			break;
	case 11:
		strcpy(mes,"novembro");
			break;
	case 12:
		strcpy(mes,"dezembroo");
			break;
	default:
		printf("valor invalido");
			scanf("%s",&mes);
}
printf("%s",mes);		
}
