#include <stdio.h>

/*
Faça um programa em C que receba o valor do salário mínimo e o valor do
salário de um funcionário, calcule e mostre a quantidade de salários mínimos que
esse funcionário ganha.
*/
main(){
	float sal_minimo,sal_funcionario;
	int quantidade;
	
	printf("digite o salario minimo e o salario do funcionario: ");
	scanf("%f%f",&sal_minimo,&sal_funcionario);
	
	
	quantidade=(sal_funcionario/sal_minimo);
	
	printf("O funcionario ganha %d salarios minimos\n",quantidade);
	
}