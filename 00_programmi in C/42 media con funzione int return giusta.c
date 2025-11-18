//funzione che fa la media di n numeri
#include <stdio.h>
int valore;

float media(int n1, int n2){
	return (float)(n1+n2)/2; //casting
}

int main(){
	int a, b;
	printf("Inserisci il primo numero: ");
	scanf("%d", &a);
	printf("Inserisci il secondo numero: ");
	scanf("%d", &b);
	
	float r=media(a,b);
	printf("La media e': %.2f", r);
}
