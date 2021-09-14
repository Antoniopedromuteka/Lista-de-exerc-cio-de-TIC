#include<stdio.h>
#include <stdlib.h>
#include<math.h>

/*
Faça um programa em C que calcule e mostre a área de um quadrado. Sabese que: A = lado * lado.
*/
main(){
	
	float lado, area;
	
	
	printf("digite o valor : ");
	scanf("%f",&lado);
	
	area=(pow(lado,2));
	
	printf("A area do quadrado e : %.1f\n",area);
	
	
 	system("pause");
	
}