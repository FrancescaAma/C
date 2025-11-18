//le prime 2 caselle hanno 1 e 2, le successive la somma dei ultimi 2
#include <stdio.h>
#define DIM 20

int main(){
	int a[DIM], i; //dubble, long, float.. grandezza numeri
	a[0]=1;
	a[1]=2;
	
	printf("--------- REGOLA DI FIBONACCI --------- \n");
	
	for (i=2; i<DIM; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	
	for (i=0; i<DIM; i++)
	{
		printf("La casella %d vale %d \n", i, a[i]);
	}
}
