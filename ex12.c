
#include<stdio.h>


/*
N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou
da esquerda para a direita tem o mesmo valor. Ex.: 929, 44, 97379. Fazer um
algoritmo que dado um n�mero de 5 d�gitos; calcular e escrever se este n�mero �
pal�ndromo.
*/
main(){
	 int num, u,d,c,m,mm;
	 
	 
	 printf("digite um numero: ");
	 scanf("%d",&num);
	 
	 u=(num/1)%10;
	 d=(num/10)%10;
     c=(num/100)%10; 
     m=(num/1000)%10;
     mm=(num/10000)%10;
	 
	 if(u==mm && d==m){
		 printf("o numero %d � um numero palindromo\n",num);
	 }
 	
}