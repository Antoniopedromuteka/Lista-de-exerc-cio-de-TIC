#include<stdio.h>


/*
Fa�a um programa em C que receba o sal�rio de um funcion�rio, calcule e
mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.
*/

main(){
	float salario, novosalario;
	
	
	printf("digite o salario do funcionario: ");
	scanf("%f",&salario);
	
	
	novosalario=(salario*20/100)+salario;
	
	printf("o novo salario do funcionario e : %.2f\n ",novosalario);
}