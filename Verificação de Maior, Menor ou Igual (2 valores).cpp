#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
float x,y;
printf("informe x e y \n");
scanf("%f %f", &x, &y);
if(x>y){
printf("%.2f",x);
}
else if(y>x){
printf("%.2f",y);
}
else if(y==x){
printf("Valores iguais");
}
}
