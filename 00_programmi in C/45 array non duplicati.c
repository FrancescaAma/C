#include <stdio.h>
#define DIM 5

int main(){
    int i, a[DIM], b[DIM], isPresent, j, k=0;

    for(i=0; i<DIM; i++){
        b[i]=0;
    }

    for(i=0; i<DIM; i++){
        printf("Inserisci il %d numero: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("--- VETTORE CON DUPLICATI: ---\n");
     for(i=0; i<DIM; i++){
        printf("%d\n", a[i]);
    }

    printf("--- VETTORE SENZA DUPLICATI PRIMA: ---\n");
     for(i=0; i<DIM; i++){
        printf("%d\n", b[i]);
    }

    printf("--- VETTORE SENZA DUPLICATI DOPO: ---\n");

    for(i=0; i<DIM; i++){
        isPresent=0;
        for(j=0; j<DIM; j++){
            if(a[i]==b[j]){
                isPresent=1;
                break;
            }
        }
        if(!isPresent){
            b[k]=a[i];
            printf("%d\n", b[k]);
            k++;
        }
    }

    return 0;
}