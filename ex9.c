#include <stdio.h>


/*
Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos,
para os quais fornece a quantidade de ra��o em gramas. A quantidade di�ria de
ra��o fornecida para cada gato e� sempre a mesma. Fa�a um programa em C que
receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada
gato, calcule e mostre quanto restara� de ra��o no saco ap�s cinco dias.
*/
main(){
	   float peso,quantidade;
	   float resto;
	   
	   printf("digite o peso e quantidade: ");
	   scanf("%f%f",&peso,&quantidade);
	   
	   resto=peso-((quantidade*2*5)/1000);
	   
	   printf("A resto e de %.1f quilos\n",resto);
	   	
}
 