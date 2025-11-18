#include <stdio.h>
int somma(){
	int a, b;
	printf("inserisci il primo numero ");
	scanf("%d", &a);
	printf("inserisci il secondo numero ");
	scanf("%d", &b);
	return a+b;
}

int differenza(){
	int a, b;
	printf("inserisci il primo numero ");
	scanf("%d", &a);
	printf("inserisci il secondo numero ");
	scanf("%d", &b);
	return a-b;
}

int prodotto(){
	int a, b;
	printf("inserisci il primo numero ");
	scanf("%d", &a);
	printf("inserisci il secondo numero ");
	scanf("%d", &b);
	return a*b;
}

int divisione(){
	int a, b;
	printf("inserisci il primo numero ");
	scanf("%d", &a);
	printf("inserisci il secondo numero ");
	scanf("%d", &b);
	return a/b;
}
int main(){
	int scelta=0; 
	int risultato;
	
	do
	{
		printf("1.Somma\n");
		printf("2.Differenza\n");
		printf("3.Moltiplicazione\n");
		printf("4.Divisione\n");
		printf("0.Esci\n");
		printf("Inserisci la scelta: ");
		scanf("%d", &scelta);
		switch(scelta)
			{
				case 1:
					risultato=somma();
					printf("Il risultato e': %d\n", risultato);
    			break;
				
				case 2:
					risultato=differenza();
					printf("Il risultato e': %d\n", risultato);
				break;
				
				case 3:
					risultato=prodotto();
					printf("Il risultato e': %d\n", risultato);
				break;
				
				case 4:
					risultato=divisione();
					printf("Il risultato e': %d\n", risultato);
					
				break;
				
				case 0:
				break;
				
				default:
				printf("Scelta non valida \n");
			}
	}while(scelta!=0);
}
