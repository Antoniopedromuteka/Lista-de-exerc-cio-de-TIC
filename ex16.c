
#include <stdio.h>



/*
Faça um programa que receba a altura de 15 pessoas. Este programa devera´
calcular e mostrar.
a) A menor altura do grupo
b) A maior altura do grupo
*/


main(){
	float altura, maior,menor;
	int i=0;
	
	for(i=0;i<15;i++){
	
	   printf("digite uma %d altura:\n",i+1);
	   scanf("%f",&altura);
	   
	   if(i==0){
		   maior=altura;
		   menor=altura;
	   }else if(altura>maior){
		   maior=altura;
	   }else if(altura<menor){
		   menor=altura;
	   }
	   
	}
	
	printf("A maior altura e %.1f\n",maior);
	
	printf("A menor altura e %.1f\n",menor);
	
}