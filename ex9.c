#include <stdio.h>


/*
Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos,
para os quais fornece a quantidade de ração em gramas. A quantidade diária de
ração fornecida para cada gato e´ sempre a mesma. Faça um programa em C que
receba o peso do saco de ração e a quantidade de ração fornecida para cada
gato, calcule e mostre quanto restara´ de ração no saco após cinco dias.
*/
main(){
	   float peso,quantidade;
	   float resto;
	   
	   printf("digite o peso e quantidade: ");
	   scanf("%f%f",&peso,&quantidade);
	   
	   resto=peso-((quantidade*2*5)/1000);
	   
	   printf("A resto e de %.1f quilos\n",resto);
	   	
}
 