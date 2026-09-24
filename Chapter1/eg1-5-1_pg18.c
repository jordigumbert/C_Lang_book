#include <stdio.h>
/* copy input to output primera versió */

// hem hagut d'afegir el int xk sino no cimpila
int main () {
	int c ; // fem servir int per guardar un char, per poder acceptar EOF 

	c=getchar() ; // llegir un char del input 
	while ( c != EOF ) {
		putchar(c); // l'escrivim ( o enviem a standar out, suposo ) 
		c = getchar(); // llegim el següent 
	}
	printf("final\n");        
}
