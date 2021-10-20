#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int x;
	char opc[15];
	printf("Informe o valor\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			strcpy(opc,"incluir");
				break;
		case 2:
			strcpy(opc,"deletar");
				break;
		case 3:
			strcpy(opc,"consultar");
				break;
		case (4)...(6):
			strcpy(opc,"analisar");
				break;
		case (7)...(15):
			strcpy(opc,"sair");
				break;
		default:
			printf("Opcao inexistente");
		scanf("%s",&opc);
	}
	printf("A opcao eh %s",opc);
}
