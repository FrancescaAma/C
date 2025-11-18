//programma con una funzione che fa il quadrato di un numero

#include <stdio.h>

int quadrato(int n){
	n=n*n;
	return n;
}

int main(){
	int k=0;
	printf("Inserisci il valore di cui fare la potenza: ");
	scanf("%d", &k);
	k=quadrato(k);
	printf("il quadrato e' %d\n", k);
	
	return 0;
}
