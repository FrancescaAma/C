//GENERARE NUMERI RANDOM DA 0 A 100

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define DIM 10

int main()
{
	int i, a[DIM], max=0, min=0;
	
	printf("numero minimo: ");
	scanf("%d",&min);	
	
	printf("numero massimo: ");
	scanf("%d",&max);

	printf("----- NUMERI INIZIALI ----- \n");
	
	srand(time(NULL));
	
	for(i=0; i<DIM; i++){
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	printf("----- NUMERI RANDOM ----- \n");
	for(i=0; i<DIM; i++){
		a[i]=rand()%(max-min+1)+min;
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	return 0;
}
