
#include <stdio.h>

/*
Fa�a um programa que recebe �n� n�meros calcule e mostre o sucessor de
todos os n�meros inseridos. O programa s� termina quando for digitado um n�mero
negativo.
*/


main(){
	int n,i=0;
	
	
	do{
		printf("digite um valor:\n");
		scanf("%d",&n);
		
		if(n>0){
		    printf("O seu sucessor e %d\n",n+1);
		}
		i++;
	}while(n>0);
}