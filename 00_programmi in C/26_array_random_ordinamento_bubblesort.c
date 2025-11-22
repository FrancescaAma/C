//riordinare l'array con bubble sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

int main()
{
	
	int i, j, a[DIM], temp, min=0, max=0;
	
	printf("numero minimo: ");
	scanf("%d",&min);	
	
	printf("numero massimo: ");
	scanf("%d",&max);
	
	srand(time(NULL));
	
	printf("----- NUMERI RANDOM ----- \n");
	for(i=0; i<DIM; i++){
		a[i]=rand()%(max-min+1)+min;
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	for(i=0; i<DIM-1; i++){
		for(j=0; j<DIM-1; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("----- NUMERI ORDINATI ----- \n");
	for(i=0; i<DIM; i++){
		printf("a[%d] = %d \n", i, a[i]);
	}
}
