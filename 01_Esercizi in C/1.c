//Somma degli elementi
//Dato un array di n numeri interi, calcolare e stampare la somma di tutti gli elementi.

#include <stdio.h>
#define DIM 5

int main(){
	int i, a[DIM], somma=0;
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &a[i]);
		somma=somma+a[i];
	}
	printf("La somma e': %d", somma);
	
}
