#include<stdio.h>
#include<math.h>

main(){
	float x1,x2,delta,a,b,c;
	
	
	printf("digite os valores de a b, e c: ");
	scanf("%f%f%f",&a,&b,&c);
	
	delta=pow(b,2)-4*a*c;
	if(a!=0){
	
		if(delta<0){
			printf("Raizes imaginarias");
		}else if(delta==0){
			x1=(-b /(2*a));
			printf("o x1=x2 que e igual a= %.1f\n",x1);
		}else if(delta>0){
			x1=(-b -(sqrt(delta))/(2*a));
			x2=(-b + (sqrt(delta))/(2*a));
			printf("O valor de x1 é igual a = %.1f\n",x1);
            printf("O valor de x2 é igual a = %.1f\n",x2);
		}
	}else{
		printf("Nao e possivel calcular a equacao por a=0");
	}
}