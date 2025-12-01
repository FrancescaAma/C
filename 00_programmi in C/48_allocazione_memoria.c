#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i;
	
	printf("Inserisci il numero: ");
	scanf("%d", &n);
	
	int*array=malloc(n*sizeof(int));
	
	printf("--- INIZIALIZZO ARRAY ---\n");
	
	for(i=0; i<n; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &array[i]);
	}
	
	printf("--- ARRAY PRIMA DI FREE ---\n");
	
	for(i=0; i<n; i++){
		printf("Il %d^ numero e': %d\n", i+1, array[i]);
	}
	
	free(array);
	
	printf("--- ARRAY DOPO DI FREE ---\n");
	
	for(i=0; i<n; i++){
		printf("Il %d^ numero e': %d\n", i+1, array[i]);
	}
	
	return 0;s
}
