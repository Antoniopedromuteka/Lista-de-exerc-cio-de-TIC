#include<stdio.h>

/*
Faça um programa em C que receba o salário de um funcionário e o percentual
de aumento, calcule e mostre o valor do aumento e o novo salário.
*/
main(){
	   float salario,novosalario;
	   int aumento;
	   
	   printf("digite o salario e o percentual de aumento: ");
	   scanf("%f%d",&salario,&aumento);
	   
	   novosalario=(salario*aumento/100)+salario;
	   
	   printf("o novo salario e de %.2f kz\n",novosalario);	
}