
#include <stdio.h>



/*
 Faça um programa que efectue a soma de todos os números ímpares que são
múltiplos de três e que se encontram no conjunto de 1 ate´ 500
*/

main(){
	int i=0,simp=0;
	
	
	for(i=1;i<=500;i++){
		if(i%2!=0){
           if(i%3==0){
			simp+=i;
		   }
       
	    }
	}
	
	printf("A soma dos numeros impares e de: %d\n",simp);
	
}