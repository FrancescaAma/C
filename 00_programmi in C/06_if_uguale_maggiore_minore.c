#include <stdio.h>

int main(){
	
    int n1, n2;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);
    
    if(n1==n2){
        printf("%d e' uguale a %d",n1,n2);
    }
    else if(n1>n2){
        printf("%d e' maggiore di %d",n1,n2);
    }
    else{
        printf("%d e' maggiore di %d",n2,n1);
    }
    
}
