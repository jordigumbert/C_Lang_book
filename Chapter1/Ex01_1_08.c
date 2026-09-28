// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
#include <stdio.h>

int main () { 
	int c ; // per guardar un char de 1 byte
	int nl = 0 ;
	int nt = 0 ;
	int nb = 0 ; // new line ,  new tab , new blank ... iniciats a 0
	c = getchar();
	while ( c != EOF ) {
		if ( c == '\n') ++nl ;
		if ( c == '\t') ++nt ;
		if ( c == ' ')  ++nb ;
	c = getchar(); 
	}
printf("\ntenim:\t %d \t Tabulacions\ntenim:\t %d \t Canvis de linia \ntenim:\t %d \t Espais blancs\n",  nt , nl , nb );
return 0;
}
