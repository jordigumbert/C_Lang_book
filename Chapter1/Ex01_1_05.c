#include <stdio.h>
#define PASS 5

int main ( void ) {

	float fahr , cels  ;
	//int pas ; 
	pas = 5 ; 
	printf("Celsius to Fahrenheit \n ");
	for (cels = 100.0 ; cels >= -10.0; cels -= PASS ) {
		
//		cels = (5.0/9.0)*(fahr - 32 );
		fahr = cels*(9.0/5.0)+32;	
		printf(" %.3fºC\t son %.3fºF\n",cels ,fahr);
	}

return 0 ; 
}
