#include<stdio.h>

/*
O custo ao consumidor de um carro novo e� a soma do pre�o de f�brica com o
percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica.
Fa�a um programa em C que receba o pre�o de f�brica de um ve�culo, o
percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o pre�o final do ve�culo
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