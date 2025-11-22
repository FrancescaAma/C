#include <stdio.h>

int main(){
	
	int voto;
	
	printf("Inserisci un voto: ");
	scanf("%d", &voto);
	
	if (voto>=6){
		printf ("Promosso\n");
	}
	else{
		printf ("Bocciato\n");
	}
	
}
