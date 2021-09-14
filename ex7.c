#include<stdio.h>

/*
O custo ao consumidor de um carro novo e´ a soma do preço de fábrica com o
percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Faça um programa em C que receba o preço de fábrica de um veículo, o
percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo
*/
main(){
	float preco,lucro,imposto,preco_final;
	int perc_lucro,perc_imposto;
	
	printf("digite o preco de fabrica, o percentual de lucro e o percentual de imposto: ");
	scanf("%f%d%d",&preco,&perc_lucro,&perc_imposto);
	
	lucro=(preco*perc_lucro/100);
	imposto=(preco*perc_imposto/100);
	
	preco_final=(preco+lucro-imposto);
	
	printf("o preco final do veiculo e %.1f kz\n",preco_final);
}