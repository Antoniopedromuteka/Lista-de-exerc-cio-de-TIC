
#include <stdio.h>


/*
Faça um programa que recebe 10 números e ache a média dos pares e a
média dos ímpares.
*/

main(){
	int n,i=0,sp=0,simp=0,c1=0,c2=0;
	float mp=0, mimp=0;
	
	
	for(i=0;i<10;i++){
		printf("digite um numero: ");
		scanf("%d",&n);
		
		if(n%2==0){
			sp+=n;
			c1++;
		}else{
			simp+=n;
			c2++;
		}
	}
	mp=sp/c1;
	mimp=simp/c2;
	
	printf("A media dos numeros pares é : %.1f\n",mp);
	printf("A media dos numeros impares é : %.1f",mimp);
}