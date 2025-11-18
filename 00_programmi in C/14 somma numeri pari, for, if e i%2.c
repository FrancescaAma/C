#include <stdio.h>

int main(){
    int nm, i, s=0;
    printf("inserisci il numero massimo: ");
    scanf("%d", &nm);
    for(i=0; i<=nm; i++){
        if(i%2==0){
            s=s+i;
            printf("Il numero del ciclo e' %d e la somma attuale e' %d\n", i, s);
        }
        else{
            printf("Il numero del ciclo e' %d ed è dispari\n", i );
        }
    }
}