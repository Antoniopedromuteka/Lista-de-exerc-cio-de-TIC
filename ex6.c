#include <stdio.h>

/*
Fa�a um programa em C que receba o custo de um espet�culo teatral e o pre�o
do convite desse espet�culo. Esse algoritmo devera� calcular e mostrar a
quantidade de convites que devem ser vendidos para que, pelo menos, o custo do
espet�culo seja alcan�ado.
*/

main(){
	float custo_teatro, preco_convite;
	int quantidade;
	
	printf("digite o custo do teatro e o preco do convite: ");
	scanf("%f%f",&custo_teatro,&preco_convite);
	
	quantidade=(custo_teatro/preco_convite);
	
	printf("devem ser vendidos %d convites pelo menos para que o custo do espetaculo seja alcancado\n ",quantidade);
}