

#include <stdio.h>

/*
A s�rie de Fibonacci e� formada pela sequ�ncia: 0, 1, 1, 2, 3, 5, 8, 13,
21, ... Construa um Programa em C que gere e mostre a s�rie ate� o
vig�simo termo.
*/

main(){
	int c=0,c1=1,c2,i=0;
	printf("%d\n%d\n",c,c1);
	for(i=0;i<20;i++){
		c2=c+c1;
		c=c1;
		c1=c2; 
		
		printf("%d\n",c2);
	}
	
}