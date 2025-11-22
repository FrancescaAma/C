#include <stdio.h>

void incrementa(int n){
    n++; //incremento la copia
    printf("%d dentro funzione\n", n);
    printf("%p dentro funzione numero indirizzo\n", (void*)&n);
}

int main(){
	
    int x=5;
    int *p=&x;

    incrementa(x);
    
    printf("%d fuori funzione\n", x);
    
    printf("%p fuori funzione numero indirizzo\n", (void*)&x); //funziona comunque anche se non dichiaro p (che in pratica sto assegnando il puntatore a p)
    
    printf("%p fuori funzione numero indirizzo\n", (void*)p);
    
    printf("%d valore dentro puntatore\n", *p );
}
