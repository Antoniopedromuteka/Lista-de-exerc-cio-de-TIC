

#include <stdio.h>


/*
Um hotel com 30 quartos, cobra USD 50,00 por di�ria e mais uma taxa de servi�os.
A taxa de servi�os e� de:
� USD 4,00 por di�ria, se o n�mero de di�rias for < 15;
� USD 3,60 por di�ria, se o n�mero de di�rias for = 15;
� USD 3,00 por di�ria, se o n�mero de di�rias for > 15.
Fa�a um Programa em C que imprima o nome e o total da conta de cada cliente
do hotel. Imprima tamb�m o total ganho pelo hotel.

*/

main(){
	int i=0,dias,q;
	float tot;
 	char nome[30];
 	printf("digite a quantidade de clientes: ");
 	scanf("%d",&q);
 	if(q<=30){
 		for(i=0;i<q;i++){
		 printf("digite o nome: ");
		 scanf("%s",&nome[i]);
		 printf("digite quantos dias voce ficou hospedado: ");
		 scanf("%d",&dias);
		 if(dias<15){
			 tot=(dias*50)+4;
			 printf("Nome: %s\n total de conta: %.1f$\n",nome,tot);
		 }else if(dias==15){
			 tot=(dias*50)+3.6;
			  printf("Nome: %s\n total de conta: %.1f$\n",nome,tot);
		 }else{
			 tot=(dias*50)+3;
			  printf("Nome: %s\n total de conta: %.1f$\n",nome,tot);
		 }
	  }
	}else{
		printf("quantidade inv�lida\n");
	}
}