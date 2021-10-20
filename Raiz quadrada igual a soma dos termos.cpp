#include<stdio.h>
#include<math.h>
main()
{
	int centenas, dezenas, unidades, num, dezenas_de_milhar,k,j;
	float q;
	num=3025;//trocar o numero aqui
	do{
	dezenas_de_milhar= num/1000;
	centenas  = (num%1000) / 100;
	dezenas = ((num%1000)%100) / 10;
	unidades = (((num%1000)%100)%10);
	k=(dezenas_de_milhar*10)+centenas;
	j=(dezenas*10)+unidades;
	k=k+j;
	q=sqrt(num);
	if(q==k){
	printf("O valor %d atende os requisitos!!!\n",num);}
	num++;
	}
	while(num<400000);//trocar o numero aqui
	
}
