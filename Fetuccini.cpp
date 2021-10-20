#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>  
main()
{  
	int num1, num2,  n, i , valorTermo,  acum; 
	printf ("Digite o primeiro numero:") ; 
	scanf ("%d",  &num1) ;  
	printf ( "Digite o segundo numero:"); 
	scanf ("%d",  &num2) ; 
	acum=num2; 
	printf ( "Digite a quantidade de termos:") ; 
	scanf ("%d",  &n); 
  	if( n < 3)   
	{  
    	printf ( "A quantidade mínima de termos é 3. \n ") ;
	}  
	printf ( "%d\n",  num1) ; 
	printf ( " %d\n",  num2) ;  
	for(i   =  3;  i   <=  n ;  i ++)
	{  
		if( i  % 2 ==  0)
		{    
	  	valorTermo = num2 - num1; //para par.     
	    }   
		else     
		{    
		valorTermo = num2 + num1; //para impar   
		}  
		printf ( " %d\n",valorTermo) ;  
		num1 = num2;   
		num2 = valorTermo; 
		acum=acum*valorTermo; 
	} 
	printf("\n Multiplicacao eh %d",acum);
	return 0;
}
