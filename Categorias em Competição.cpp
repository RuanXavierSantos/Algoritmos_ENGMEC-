#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int idade;
	char c[12];
	printf("Informe a idade\n");
	scanf("%d",&idade);
	switch (idade)
	{
		case (5)...(7):	
		strcpy(c,"InfantilA");		
		break;
		case (8)...(10):
		strcpy(c,"InfabtilB");				
		break;
		case (11)...(13):
		strcpy(c,"JuvenilA");
		break;
		case (14)...(17):
		strcpy(c,"JuvenilB");
		break;
		case (18)...(9999):
		strcpy(c,"Senior");
		break;
		default:
		printf("Novinho demais da conta");
		scanf("%s",&c);
		}
			
		printf("A categoria eh %s",c);
}
