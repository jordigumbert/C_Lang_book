// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
// backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
// unambiguous way.
//
#include <stdio.h>
int main () {
		int c = 'a' ; 
		c = getchar();
		while ( c != EOF ) { 
				if ( c != '\t' &&  c != '\\' && c != '\b' ){
						putchar(c); 
				}
				if ( c == '\t' )
						printf("\\t");  

				if ( c == '\b' )
						printf("\\b");

				if ( c == '\\' )
						printf("\\backslash");

				c = getchar();

		} 

		return 0 ;
}
