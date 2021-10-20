#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
main()
{
	float x1,x2,y1,y2, DEP;
	printf("De P, informe x1,y1: ");
	scanf("%f %f",&x1,&y1);
	printf("De Q, informe x2,y2: ");
	scanf("%f %f",&x2,&y2);
DEP = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("DEP eh %.2f\n",DEP);
}
	
	

