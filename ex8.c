#include<stdio.h>

/*
 Fa�a um programa em C que receba o n�mero de horas trabalhadas e o valor
do sal�rio m�nimo, calcule e mostre o sal�rio a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do sal�rio m�nimo.
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada.
c) o imposto equivale a 3% do sal�rio bruto.
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.
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