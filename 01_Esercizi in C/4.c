//Conta dei numeri pari e dispari
//Dato un array di interi, contare quanti sono pari e quanti sono dispari.

#include <stdio.h>
#define DIM 10

int main(){
	int i, a[DIM], pari=0, dispari=0;
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &a[i]);
		if(a[i]%2==0){
			pari++;
		}
		else
		{
			dispari++;
		}
	}
	
	printf("I numeri pari sono: %d\n", pari);
	printf("I numeri dispari sono: %d\n", dispari);
}
	
