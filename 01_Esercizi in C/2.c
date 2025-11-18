//Media aritmetica
//Calcolare la media dei valori contenuti in un array.

#include <stdio.h>
#define DIM 5

int main(){
	
	int i;
	float a[DIM], somma=0, media=0;
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%f", &a[i]);
		somma=somma+a[i];
	}
	media=somma/DIM;
	printf("La media e': %.2f", media);
	
}
