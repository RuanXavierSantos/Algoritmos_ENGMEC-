#include<stdio.h>
main()
{
	int n,t,cont,j;
	n=1;
	t=0;
	j=0;
	cont=0;
	cont++;
	printf("%d°:  %d\n",cont,n);
	while(cont<30)
	{
		j=n+t;
		t=n;
		n=j;
		cont++;
		printf("%d°:  %d\n",cont,j);
	}
}
