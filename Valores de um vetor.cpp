#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, ""); //Fun��o que adiciona o portugu�s
	int a[6],b[6],c[12],p=0,i=0,n,k,j=0;
	do
	{
		printf("Informe um n�mero para o vetor A: \n");
		scanf("%d",&n);
		if(n%2==0){
			a[i]=n;
			i++;}
	}
	while(i<6);
	printf("\n|||||||||||||||||||||||||||||Coloquei isso s� para ficar mais f�cil de ver a separa��o!|||||||||||||||||||||||||||||\n\n");
	i=0;
	do
	{
		printf("Informe um n�mero para o vetor B: \n");
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
	printf("Vetor �: ( ");
	do
	{
		printf("%d,",c[j]);
		j++;
		
	}
	while(j<12);
	printf(")");
}
