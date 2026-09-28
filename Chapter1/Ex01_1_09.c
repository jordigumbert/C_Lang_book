// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank.
#include <stdio.h>

int main () {
		int c = 'a' ; // per guardar el char llegit
		int pc = 'a' ; // per guardar previous char 

		c = getchar() ; // llegim el primer ;
		while ( c != EOF ) { // fins al final de l'arxiu 
				if ( c != ' ') {// si no es espai, el posem
						putchar(c);
				} else if ( pc != ' '){ // si es espai el posem quan lanterior no
						putchar(c);			
				}
				pc = c ; // guardem el char com a char anterior
				c = getchar() ;
		}
		return 0;
}
