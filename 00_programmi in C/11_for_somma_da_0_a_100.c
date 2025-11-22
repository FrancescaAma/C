#include <stdio.h>

int main(){
	
    int i, somma=0;
    
    for(i=0; i<=100; i=i+1){
        somma=somma+i;
    }
    
    printf("La somma di tutti i numeri da 0 a 100 e': %d", somma);
    
}
