#include <stdio.h>

int main ( void ) {

	float fahr , cels  ;
	int pas ; 
	pas = 5 ; 
	printf("Celsius to Fahrenheit \n ");
	for (cels = -20.0 ; cels <= 100; cels += pas ) {
		
//		cels = (5.0/9.0)*(fahr - 32 );
		fahr = cels*(9.0/5.0)+32;	
		printf(" %.3fºC\t son %.3fºF\n",cels ,fahr);
	}

return 0 ; 
}
