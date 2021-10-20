#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159
main()
{
float volume, raio;
printf("informe o raio: ");
scanf("%f",&raio);
volume = (4/3)*PI*(raio*raio*raio);
printf("volume é %.2f\n",volume);

system("PAUSE");
}
