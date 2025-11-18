#include <stdio.h>

int incrementa (int n){ //no void ma int
	n=n+1;
	printf("Il nuovo valore e': %d\n", n);
	return n; //ritorna la variabile e giù lo riassegno a k
}

int main(){
	int k=0;
	printf("Inserisci il valore da incrementare: ");
	scanf("%d", &k);
	k=incrementa(k); //il valore calcolato di n viene inniettato a k con questo comando
	printf("il valore di k e %d\n", k);
	
	return 0;
}
