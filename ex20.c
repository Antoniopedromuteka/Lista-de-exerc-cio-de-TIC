

#include <stdio.h>



/*
Chico e Juca s�o irm�os que aprontam com v�rias pessoas do vilarejo em que
vivem: ao sacrist�o colocam p�lvora no caminho, explodindo-o; �s galinhas da
velha senhora, atam anzois que as matam e, ap�s pranteadas e cozidas, roubam
os assados, fazendo com que o pobre c�o da mulher receba toda a culpa. Esses
meninos aprontam com v�rias pessoas, e at� com o pr�prio tio, at� que o padeiro,
vendo que os dois lhe roubavam os biscoitos, resolve vingar-se, num final tr�gico a
que todos da cidade apoiam. Mais informa��es sobre esses meninos travesseiros
podem ler no livro Juca e Chico: Hist�ria de dois meninos em sete travessuras.
Todavia, Chico tem 1,50m e cresce 2 cent�metros por ano, enquanto Juca tem
1,10m e cresce 3 cent�metros por ano. Construir um algoritmo que calcule e imprima
quantos anos ser�o necess�rios para que Juca seja maior que Chico.
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