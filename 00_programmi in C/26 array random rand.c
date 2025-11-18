//creare un array, visualizzare i numeri dentro, sovrascrivere i numeri con dei numeri random

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define DIM 10

int main()
{
	int i, a[DIM];
	printf("----- NUMERI INIZIALI ----- \n");
	
	srand(time(NULL));
	
	for(i=0; i<DIM; i++){
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	printf("----- NUMERI RANDOM ----- \n");
	for(i=0; i<DIM; i++){
		a[i]=rand();
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	return 0;
}
