#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
main()
{
	float DIST, QUANTIDADEDEL, CM;
	printf("informe a distancia percorrida: ");
	scanf("%f",&DIST);
	printf("informe a quantidade de litros consumida: ");
	scanf("%f",&QUANTIDADEDEL);
	CM = DIST/QUANTIDADEDEL;
	printf("Consumo médio %.2f\n",CM);
		
	
}
