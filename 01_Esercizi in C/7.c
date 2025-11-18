//Somma degli elementi in posizione pari
//Calcolare la somma dei valori che si trovano in posizione pari (indice 0, 2, 4, ...).

#include <stdio.h>
#define DIM 10

int main(){
	int i, a[DIM], somma=0;
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &a[i]);
		if(i%2==0){
			somma=somma+a[i];
		}
	}
	
	printf("La somma dei numeri in posizine pari e': %d ", somma);
}
