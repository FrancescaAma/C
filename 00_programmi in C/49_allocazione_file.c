#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i;
	
	FILE *fp=fopen("49_allocazione_file.txt", "w");
	
	printf("Inserisci il numero: ");
	scanf("%d", &n);
	
	int*array=malloc(n*sizeof(int));
	
	printf("--- INIZIALIZZO ARRAY ---\n");
	
	for(i=0; i<n; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &array[i]);
	}
	
	fprintf(fp, "--- ARRAY PRIMA DI FREE ---\n");
	
	for(i=0; i<n; i++){
		fprintf(fp, "Il %d^ numero e': %d\n", i+1, array[i]);
	}
	
	free(array);
	
	fprintf(fp, "--- ARRAY DOPO DI FREE ---\n");
	
	for(i=0; i<n; i++){
		fprintf(fp, "Il %d^ numero e': %d\n", i+1, array[i]);
	}
	
	fclose(fp);
	
	return 0;
}
