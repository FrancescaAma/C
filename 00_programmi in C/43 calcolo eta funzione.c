//funzione calcolo età con anno di nascita e anno attuale
#include <stdio.h>

int calcolaEta(int annoAttuale, int annoNascita){
	if (annoAttuale>annoNascita){
		return annoAttuale-annoNascita;
	}
	else
	{
		return annoNascita-annoAttuale;
	}
	
}
int main(){
	int a, b;
	printf("Inserisci l'anno attuale: ");
	scanf("%d", &a);
	printf("Inserisci l'anno di nascita: ");
	scanf("%d", &b);
	int eta=calcolaEta(a,b);
	
	printf("L'eta' e': %d", eta);
	
}
