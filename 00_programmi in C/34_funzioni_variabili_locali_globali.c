#include <stdio.h>

void incrementa (int n){
	n=n+1;
	printf("Il nuovo valore e': %d", n);
}

int main(){
	int k;
	printf("Inserisci il valore da incrementare: ");
	scanf("%d", &k);
	incrementa(k);
	
	return 0;
}
