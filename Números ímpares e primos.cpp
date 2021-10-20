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
    j=j+num;//MUDAR AQUI, PRESTA ATENÇAÕ CARAI, SE FOR SOMA É +, SE FOR MULTIPLICAÇÃO É *, SE FOR DIFERENÇA EH -!!!!!!!!!!!!
 num++;
}
while(num<10);
printf("Soma/Multiplicação/Diferença é %d",j);//MUDAR AQUI, PRESTA ATENÇAÕ CARAI,apagem oq n faz parte do seu programa
 return 0;
}
