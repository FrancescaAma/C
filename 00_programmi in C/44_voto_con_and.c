#include <stdio.h>

int main(){
    int votof, votoc;

    printf("Inserisci il voto finale:" );
    scanf("%d", &votof);

    while(votof<0 || votof>10){
        printf("Voto non valido, deve essere compreso tra 0 e 10.\nInserisci il voto finale: ");
        scanf("%d", &votof);
    }

    printf("Inserisci il voto di condotta: ");
    scanf("%d", &votoc);

    while(votoc<0 || votoc>10){
        printf("Voto non valido, deve essere compreso tra 0 e 10.\nInserisci il voto finale: ");
        scanf("%d", &votoc);
    }
   
    if(votof>=6 && votoc>6){
        printf("SEI PROMOSSO!! BRAVOH/AH");
    }
    else{
        printf("SEI BOCCIATO!! :(");
    }
}
