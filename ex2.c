#include <stdio.h>

/*
Fa�a um programa em C que receba o valor do sal�rio m�nimo e o valor do
sal�rio de um funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que
esse funcion�rio ganha.
*/
main(){
	float sal_minimo,sal_funcionario;
	int quantidade;
	
	printf("digite o salario minimo e o salario do funcionario: ");
	scanf("%f%f",&sal_minimo,&sal_funcionario);
	
	
	quantidade=(sal_funcionario/sal_minimo);
	
	printf("O funcionario ganha %d salarios minimos\n",quantidade);
	
}