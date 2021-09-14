#include <stdio.h>

/*
Faça um programa em C que receba o custo de um espetáculo teatral e o preço
do convite desse espetáculo. Esse algoritmo devera´ calcular e mostrar a
quantidade de convites que devem ser vendidos para que, pelo menos, o custo do
espetáculo seja alcançado.
*/

main(){
	float custo_teatro, preco_convite;
	int quantidade;
	
	printf("digite o custo do teatro e o preco do convite: ");
	scanf("%f%f",&custo_teatro,&preco_convite);
	
	quantidade=(custo_teatro/preco_convite);
	
	printf("devem ser vendidos %d convites pelo menos para que o custo do espetaculo seja alcancado\n ",quantidade);
}