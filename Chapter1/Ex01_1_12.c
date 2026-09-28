//Exercise 1-12. Write a program that prints its input one word per line.
//

#include <stdio.h>

int main () {
	// int c = getchar();
	int c = 'a' ; 
	int pc = 'a' ; // previ char
	while ( (c = getchar()) != EOF ) {

			if ( c == '\t' || c == ' ' ) {
					if ( pc != '\t' && pc != ' ' )
							putchar('\n');
			} else if ( pc != '\t' && c != ' ' )
					putchar(c);
			pc = c ; 
	}	


return 0 ; 
} 
