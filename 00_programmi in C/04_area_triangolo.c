#include <stdio.h>

int main(){
	
	int base, altezza, area;
	
    printf("Inserisci la base = ");
	scanf("%d", &base);
	
    printf("Inserisci l'altezza = ");
    scanf("%d", &altezza);
    
	area=base*altezza/2;
	
	printf("Area = %d", area);
	
}
