#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
float a,b,c,d,r1,r2,ru;
printf("informe a, b, c");
scanf("%f %f %f", &a, &b, &c);
d = b*b-4*a*c;
if(d>0){
r1 = ((-b)+sqrt(d))/2*a;
r2 = ((-b)-sqrt(d))/2*a;
printf("A primeira raiz eh %.2f\n",r1);
printf("A segunda raiz eh %.2f\n",r2);
}
else if(d==0){
ru = ((-b)+sqrt(d))/2*a;
printf("O valor unico da raiz eh %.2f\n", ru);
}
else if(d<0){
printf("não existe raiz");
}
}


