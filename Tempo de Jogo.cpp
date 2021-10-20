#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#define dia 24
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int hi,mi,hf,mf,tempototalh,tempototalm;
	printf("Informe a hora de início do jogo, em seguida, informe os minutos!\n");
	scanf("%d \n%d",&hi,&mi);
	printf("Informe a hora do fim do jogo, em seguida, informe os minutos!\n");
	scanf("%d %d",&hf,&mf);
	tempototalh=hf-hi;
	tempototalm=mf-mi;
	if(tempototalh<0)
	{
		tempototalh=(dia-hi)+hf;
	}
	else if(tempototalh>0)
	{
		tempototalh=tempototalh*1;
	}
	//kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
	if(tempototalm<0)
	{
		tempototalm=tempototalm*-1;
	}
	else if(tempototalm>0)
	{
		tempototalm=tempototalm*1;
	}
	//kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
	if(tempototalh>0&&tempototalh<=24&&tempototalm>=60)
	{
		tempototalm=tempototalm-60;
	}
	else if(tempototalh>24&&tempototalm>=0&&tempototalm<60)
	{
		tempototalh=tempototalh-24;
	}
	else if(tempototalh>24&&tempototalm>=60)
	{
		tempototalh=tempototalh-24;
		tempototalm=tempototalm-60;
	}
	//kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
	if(tempototalh>0&&tempototalh<10&&tempototalm>=0&&tempototalm<10)
	{
		printf("Tempo de Jogo = 0%d:0%d",tempototalh,tempototalm);
	}
	else if(tempototalh>0&&tempototalh<10&&tempototalm>=0&&tempototalm<60)
	{
		printf("Tempo de Jogo = 0%d:%d",tempototalh,tempototalm);
	}
	else if(tempototalh>0&&tempototalh<=24&&tempototalm>=0&&tempototalm<10)
	{
		printf("Tempo de Jogo = %d:0%d",tempototalh,tempototalm);
	}
	else if(tempototalh>=10&&tempototalh<=24&&tempototalm>=0&&tempototalm<60)
	{
		printf("Tempo de Jogo = %d:%d",tempototalh,tempototalm);
	}
}
