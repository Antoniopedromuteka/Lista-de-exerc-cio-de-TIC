#include<stdio.h>


/*
Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça
um programa em C que receba o valor do salário mínimo e a quantidade de
quilowatts consumida por uma residência. Calcule e mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%.
*/

main(){
	float salario_minimo,valor_r,valor_d;
	int quantidade, valor_q;
	
	printf("digite o valor do salario minimo e a quantidade de quilowatts consumida por cada residencia:\n");
	scanf("%f%d",&salario_minimo,&quantidade);
	
	valor_q=((salario_minimo/quantidade)*(0.2));
	valor_r=salario_minimo-(valor_q*quantidade);
	valor_d=salario_minimo-(salario_minimo*15/100);
	
	printf("%.1f\n",valor_r);
	printf("%.1f\n",valor_d);
	printf("%d\n",valor_q);
}