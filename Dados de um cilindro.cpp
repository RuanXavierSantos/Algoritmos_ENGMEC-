#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
main()
{
#define PI 3.14159
float h, r, areadasbases, areadabase, circunferencia, quantidadedelatas, arealateral, litrosnecessarios, areatotal, custo;
printf("informe r: ");
scanf("%f",&r);
printf("informe h: ");
scanf("%f",&h);
areadabase = PI*r*r;
printf ("areadabase � %.2f\n",areadabase);
areadasbases = areadabase*2;
printf ("areadasbases � %.2f\n",areadasbases);
circunferencia = PI*r*2;
printf ("circunferencia � %.2f\n", circunferencia);
arealateral = circunferencia*h;
printf ("arealateral � %.2f\n", arealateral);
areatotal = areadasbases+arealateral;
printf ("areatotal � %.2f\n", areatotal);
litrosnecessarios = areatotal/3;
printf ("litrosnecessarios � %.2f\n", litrosnecessarios);
quantidadedelatas = litrosnecessarios/5;
printf ("quantidadedelatas � %.2f\n", quantidadedelatas);
custo = quantidadedelatas*50;
printf ("custo � %.2f\n", custo);

system("PAUSE");
}
