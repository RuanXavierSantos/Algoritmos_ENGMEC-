#include<stdio.h>
#include <locale.h>
main() {
 setlocale(LC_ALL, "");
 int j,num, i, resultado = 0;
 num=3;
 j=0;
 do{
 	resultado=0;
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    j=j+num;//MUDAR AQUI, PRESTA ATEN�A� CARAI, SE FOR SOMA � +, SE FOR MULTIPLICA��O � *, SE FOR DIFEREN�A EH -!!!!!!!!!!!!
 num++;
}
while(num<10);
printf("Soma/Multiplica��o/Diferen�a � %d",j);//MUDAR AQUI, PRESTA ATEN�A� CARAI,apagem oq n faz parte do seu programa
 return 0;
}
