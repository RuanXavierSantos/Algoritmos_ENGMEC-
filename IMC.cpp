#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float h,pesomasculino,pesofeminino;
	char sexo;
	printf("informe o sexo");
	scanf("%c",&sexo);
	printf("informe a altura");
	scanf("%f",&h);
	switch(sexo){
		case 'f':
		pesofeminino=62.1*h-44.7;
		printf("Peso ideal feminino: %.2f",pesofeminino);
		break;
		case 'm':
		pesomasculino=72.7*h-58;
		printf("Peso ideal masculino: %.2f",pesomasculino);
		break;
		default:
		printf("Tu es trans meu amigo?");
	}
	
}
	
	
	
