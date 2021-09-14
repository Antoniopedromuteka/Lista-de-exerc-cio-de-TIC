#include <stdio.h>

/*
Faça um programa em C que receba o ano de nascimento de uma pessoa e o
ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050.
*/
main(){
	   int ano_actual,ano_nasc,idade;
	   
	   
	   printf("digite o ano actual e o ano de nascimento: ");
	   scanf("%d%d",&ano_actual,&ano_nasc);
	   
	   
	   idade=ano_actual-ano_nasc;
	   
	   printf("A sua idade e %d anos e em 2050 teras %d anos\n",idade,(2050-ano_nasc));	
	
}