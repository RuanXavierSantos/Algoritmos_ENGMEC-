#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
int idade;
printf("Digite a idade: \n");
scanf("%d",&idade);
if(idade<5)
{
	printf("Novinho demais da conta");
}
else if(idade>=5&&idade<8)
{
    printf("Infantil A");
}
else if(8<=idade&&idade<11)
{
	printf("Infantil B");
}
else if(11<=idade&&idade<14)
{
	printf("Juvenil A");
}
else if(14<=idade&&idade<18)
{
	printf("Juvenil B");
}
else if(18<=idade)
{
	printf("Deus vai te ver daqui menos tempo que os outros, sorry");
}
}

