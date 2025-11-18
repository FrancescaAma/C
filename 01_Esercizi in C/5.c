//Ricerca di un elemento
//Chiedere un numero all'utente e verificare se è presente nell'array.

#include <stdio.h>
#define DIM 5

int main(){
	int i, a[DIM], numero=0, trovato=0;
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il %d^ numero: ", i+1);
		scanf("%d", &a[i]);
	}
		
	printf("Inserisci il numero da cercare: ");
	scanf("%d",&numero);
	
	for(i=0; i<DIM; i++){
		if(numero==a[i]){
			trovato=1;
		}
		
	}
	
	if(trovato==1){
		printf("Il numero %d e' presente.\n", numero);
	}
	else
	{
		printf("Il numero %d non e' presente.\n", numero);
	}
	
}
