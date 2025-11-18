//Valore massimo e minimo
//Trovare e stampare il valore massimo e minimo dell'array.

#include <stdio.h>
#define DIM 5

int main(){
	int i, a[DIM], massimo, minimo;
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &a[i]);
	}
	
	massimo=a[0];
	minimo=a[0];
	
	for(i=0; i<DIM; i++){
		if(a[i]>massimo){
			massimo=a[i];
		}
		
		if(a[i]<minimo){
			minimo=a[i];
		}
	}	
	printf("Il numero massimo e': %d.\n", massimo);
	printf("Il numero minimo e': %d.\n", minimo);
}
