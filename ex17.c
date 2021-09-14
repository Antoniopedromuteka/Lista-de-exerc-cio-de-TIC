
#include <stdio.h>



/*
Escreva um programa que leia um valor inicial A e mostre a sequência de
valores do cálculo de A! e o seu resultado. Ex: 5 x 4 x 3 x 2 x 1 = 120
*/

main(){
	int A, fat=1, i=0;
	
	
	printf("digite um valor");
	scanf("%d",&A);
	
	for(i=A;i>=1;i--){
		fat=fat*i;
	}
	
	printf("O fatorial e %d\n",fat);
}