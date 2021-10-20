#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float a,b,c;
	printf("Mesmo de o valor de a,b ou c for 1 ou -1, informe");
	printf("informe a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
		float DELTA, raiz1,raiz2;
	DELTA = (b*b)-4*a*c;
	if(DELTA>0);
	raiz1 = ((-b)+sqrt(DELTA))/2*a;
	raiz2 = ((-b)-sqrt(DELTA))/2*a;
	printf("raiz1 eh %.2f\n",raiz1);	
	printf("raiz2 eh %.2f\n",raiz2);	
		
	
}
