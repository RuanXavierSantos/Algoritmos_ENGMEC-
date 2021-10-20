#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
printf("Sexo eh m ou f\n");
float h, pesomasculino, pesofeminino;
char sexo;
printf("Defina o sexo:");
scanf("%c", &sexo);
printf("Defina a altura:");
scanf("%f", &h);
if (sexo=='m')
{
pesomasculino=72.7*h-58;
printf("Peso ideal masculino: %.2f",pesomasculino);
}
else if(sexo=='f')
{
pesofeminino=62.1*h-44.7;
printf("Peso ideal feminino: %.2f",pesofeminino);
}
}
