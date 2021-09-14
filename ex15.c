
#include <stdio.h>

/*
Faça um programa que recebe “n” números calcule e mostre o sucessor de
todos os números inseridos. O programa só´ termina quando for digitado um número
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