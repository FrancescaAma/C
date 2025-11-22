//funzione che fa la media di n numeri

#include <stdio.h>

int valore;

float media(float med1){
	
	int i, n[valore], somma=0;
	
	for(i=0; i<valore; i++){
		printf("Inserisci il %d^ numero: ",i+1);
		scanf("%d", &n[i]);
	}
	
	for(i=0; i<valore; i++){
		somma=somma+n[i];
	}
	
	med1=(float)somma/valore;
	
	return med1;
}

int main(){
	
	float med2;
	
	printf("Di quanti numeri vuoi la media? ");
	scanf("%d", &valore);
	
	med2=media(med2);
	
	printf("La media dei numeri e'= %.2f", med2);
	
}
