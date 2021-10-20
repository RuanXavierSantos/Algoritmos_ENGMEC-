//PROGRAMA PARA DETERMINAR SE UM NUMERO É PALINDROMO
#include <stdio.h>
#include <stdlib.h> 
#define d 100 
main(){
	int digitado,num,invertido,digito;
	digitado=10;
	do{
	num = digitado;
	invertido = 0;
	while(num != 0){
		digito = num % 10;
		invertido = (invertido * 10) + digito;
		num = num / 10;
	}
	if(digitado == invertido){
	printf("Palindromo !!!\n");
	printf("%d",digitado);}
	else
	printf("Nao eh Palindromo!!!\n");
	digitado++;
	}
	while(digitado<=d);  
}


