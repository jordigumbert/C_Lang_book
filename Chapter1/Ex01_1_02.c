#include <stdio.h>

int main ( void ) {

	float fahr , cels  ;
	int pas ; 
	pas = 5 ; 
	for (fahr = -20.0 ; fahr <= 300 ; fahr += pas ) {
		
		cels = (5.0/9.0)*(fahr - 32 );
		printf(" %.3fºF\t son %.3fºC\n",fahr,cels );
	}

return 0 ; 
}
