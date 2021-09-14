#include<stdio.h>

/*
 Faça um programa em C que receba o número de horas trabalhadas e o valor
do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.
*/


main(){
	int horast,vhorat;
	float salario_min,salario_bruto,imposto,sal_receber;
	
	printf("digite o numero de horas trabalhadas e o valor do salario minimo:\n");
	scanf("%d%f",&horast,&salario_min);
	
	vhorat=(salario_min/2);
	
	salario_bruto=(horast*vhorat);
	imposto=(salario_bruto*3/100);
	
	sal_receber=(salario_bruto-imposto);
	
	
	printf("o salario a receber e de %.1f",sal_receber);
	
	
	
	
}