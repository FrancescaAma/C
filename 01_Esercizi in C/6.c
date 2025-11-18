//Inversione dell'array
//Stampare gli elementi dell'array in ordine inverso.

#include <stdio.h>
#define DIM 5

int main(){
	int i, a[DIM];
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n------ Elementi array in ordine inverso ------\n");
	
	for(i=DIM-1; i>=0; i--){
	   printf("%d ", a[i]);
    }

	
}
