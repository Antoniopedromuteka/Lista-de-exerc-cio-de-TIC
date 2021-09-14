

#include <stdio.h>



/*
Chico e Juca são irmãos que aprontam com várias pessoas do vilarejo em que
vivem: ao sacristão colocam pólvora no caminho, explodindo-o; às galinhas da
velha senhora, atam anzois que as matam e, após pranteadas e cozidas, roubam
os assados, fazendo com que o pobre cão da mulher receba toda a culpa. Esses
meninos aprontam com várias pessoas, e até com o próprio tio, até que o padeiro,
vendo que os dois lhe roubavam os biscoitos, resolve vingar-se, num final trágico a
que todos da cidade apoiam. Mais informações sobre esses meninos travesseiros
podem ler no livro Juca e Chico: História de dois meninos em sete travessuras.
Todavia, Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem
1,10m e cresce 3 centímetros por ano. Construir um algoritmo que calcule e imprima
quantos anos serão necessários para que Juca seja maior que Chico.
*/

main(){
	float altura1=1.50,altura2=1.10;
	int anos=0;
	
	while(altura1>altura2){
		altura1+=0.02;
		altura2+=0.03;
		anos++;
	}
	
	printf("serao precisos %d anos para que Juca seja maior que Chico\n",anos);
	
}