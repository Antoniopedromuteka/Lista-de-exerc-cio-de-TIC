#include<stdio.h>

/*
Fa�a um programa em C que receba o sal�rio de um funcion�rio e o percentual
de aumento, calcule e mostre o valor do aumento e o novo sal�rio.
*/
main(){
	   float salario,novosalario;
	   int aumento;
	   
	   printf("digite o salario e o percentual de aumento: ");
	   scanf("%f%d",&salario,&aumento);
	   
	   novosalario=(salario*aumento/100)+salario;
	   
	   printf("o novo salario e de %.2f kz\n",novosalario);	
}