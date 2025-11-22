#include <stdio.h>

int main(){
	
    int i, somma=0;
    
    for(i=0; i<=100; i=i+1){
        somma=somma+i;
    	printf("Numero ciclo: %d, somma attuale: %d \n", i, somma);
    }
    
}
