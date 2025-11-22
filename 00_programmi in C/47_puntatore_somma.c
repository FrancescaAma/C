#include <stdio.h>

void somma(int*a, int*b, int*risultato){
	
    *risultato=*a+*b;
    
    printf("indirizzo di a nella funzione e': %p\n", (void *)&a);
    printf("indirizzo di b nella funzione e': %p\n", (void *)&b);
    printf("indirizzo di risultato nella funzione: %p\n", (void *)&risultato);

    printf("contenuto di a: %p\n", (void *)a);
    printf("contenuto di b: %p\n", (void *)b);
    printf("contenuto di risultato: %p\n", (void *)risultato);
}

int main(){
	
    int a, b, risultato=0;

    printf("inserisci il primo numero da sommare: ");
    scanf("%d", &a);
    printf("inserisci il secondo numero da sommare: ");
    scanf("%d", &b);

    printf("indirizzo di a nella funzione e': %p\n", (void *)&a);
    printf("indirizzo di b nella funzione e': %p\n", (void *)&b);
    printf("indirizzo di somma nella funzione: %p\n", (void *)&risultato);

    somma(&a, &b, &risultato);
    printf("Il risultato e': %d\n", risultato);
    
	return 0;
}
