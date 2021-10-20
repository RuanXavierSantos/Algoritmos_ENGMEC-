#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int x;
	char c[40];
	printf("Informe a idade\n");
	scanf("%d",&x);
	switch (x)
	{
		case (1)...(15):
		strcpy(c,"naoeheleitor");
		break;
		case (16)...(17):
		strcpy(c,"facultativo");
		break;
		case (18)...(65):
		strcpy(c,"obrigatorio");
		break;
		case (66)...(150):
		strcpy(c,"facultativo");
		break;
		default:
		printf("Idadeincorreta");
		scanf("%s",&c);
	}
	printf("A classe eh %s:",c);
}

