#include <stdio.h>

int main () {
	int c,i;
	i = 0 ; 
	while ( i < 5 ) {
		c = getchar() != EOF ;

		printf("%d\n",c);
		i++;
	}

}
