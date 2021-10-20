#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int nota[5],i=0,alunos=0,maior=0,menor=0;
	float somadasnotas=0,y,x,m;
	do
	{
		printf("Informe a nota: \n");
		scanf("%d",&nota[i]);
		if(nota[i]>=7){
		maior++;}
		else{
		menor++;}		
		y=nota[i];
		somadasnotas=somadasnotas+y;
		i++;
		alunos++;
	}
	while(i<5);
	x=alunos;
	m=somadasnotas/x;
	printf("Média é: %.2f\n",m);
	printf("Número de alunos aprovados é: %d\n",maior);
	printf("Número de alunos reprovados é: %d\n",menor);
}
