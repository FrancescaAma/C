#include <stdio.h>
int main(){
	int scelta=0;
	do{
		printf("1.Somma\n2.Differenza\n0.Esci\nInserisci la scelta: ");
		scanf("%d", &scelta);
		printf("la tua scelta e' %d\n", scelta);
		while(scelta<0||scelta>2){
			printf("Scelta non valida\n");
			scelta=2;
		}
	}while(scelta!=0);
}
