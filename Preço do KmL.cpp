#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	printf("DIST em km, VOL em L");
	float DIST, VOL, R$, kml, r$km;
	"\n";
	printf("forneca a distância: ");
	scanf("%f",&DIST);
	printf("forneca o VOL: ");
	scanf("%f",&VOL);
	printf("forneca o preço por litro: ");
	scanf("%f",&R$);
	kml = DIST/VOL;
	printf("A distancia percorrida com 1 litro eh %2.f\n", kml);
	r$km = R$/kml;
		printf("O preco do km eh %.2f\n", r$km);
		system("PAUSE");
	}
	
