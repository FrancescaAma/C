#include <stdio.h>
int main(){
	int dim=5;
	int v1[dim], v2[dim], v3[dim];
	int i;
	
	printf("-------- VETTORE 1 --------\n");
	for(i=0; i<dim; i++){
		printf("v1[%d] = ", i);
		scanf("%d", &v1[i]);
	}
	
	printf("-------- VETTORE 2 --------\n");
	for(i=0; i<dim; i++){
		printf("v2[%d] = ", i);
		scanf("%d", &v2[i]);
	}
	
	printf("-------- VETTORE 3 --------\n");
	for(i=0; i<5; i++){
		v3[i]=v1[i]+v2[i];
		printf("v3[%d] = %d\n", i, v3[i]);
	}
}
