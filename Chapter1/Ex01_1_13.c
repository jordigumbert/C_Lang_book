// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.


#include<stdio.h>
int main () {

		int c, pc ; // per guardar char anterior 
		int cc = 0 ; // char count 
		int hist[25]; // per paraules de fins a 25 chars. 

		// inicialitzem comptador historic a 0 ; 
		for ( int i = 0 ; i <= 25  ; ++i ) { 
				hist[i] = 0 ; 
		}
		pc = 'a' ; // inicialitzem el char previ a un que no pugui ser separador de paraules. 


		// buscarem paraules separant per tabs , espais i canvis de linia 

		while ( (c=getchar()) != EOF ) {
			// si ni el char lelgitr ni l'anterior son separadors .... 
				if ( c != ' ' && c != '\t' && c != '\n' &&  pc != ' ' && pc != '\t' && pc != '\n' ) {
		 ++cc				
				}


		}


		return 0;
}
