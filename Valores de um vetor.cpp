#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Função que adiciona o português
	int a[6],b[6],c[12],p=0,i=0,n,k,j=0;
	do
	{
		printf("Informe um número para o vetor A: \n");
		scanf("%d",&n);
		if(n%2==0){
			a[i]=n;
			i++;}
	}
	while(i<6);
	printf("\n|||||||||||||||||||||||||||||Coloquei isso só para ficar mais fácil de ver a separação!|||||||||||||||||||||||||||||\n\n");
	i=0;
	do
	{
		printf("Informe um número para o vetor B: \n");
		scanf("%d",&k);
		if(k%2!=0){
			b[i]=k;
			i++;}
	}
	while(i<6);
	i=0;
	do
	{
		c[j]=a[i];
		j++;		
		c[j]=b[i];
		j++;
	}
	while(j<12);
	j=0;
	printf("Vetor é: ( ");
	do
	{
		printf("%d,",c[j]);
		j++;
		
	}
	while(j<12);
	printf(")");
}
