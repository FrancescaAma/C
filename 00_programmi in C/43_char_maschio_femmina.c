#include <stdio.h>
#define fflush while(getchar()!='\n');

int main(){
    char gender;
    int age;

    printf("Qual'e' il tuo genere? (inserisci m per maschio o f per femmina): ");
    scanf("%c", &gender);

   while(gender!='f' && gender!='m'){
    printf("Lettera non valida: inserisci solo m per maschio o f per femmina: ");
    scanf("%c", &gender);
    fflush;
    }

    printf("Quanti anni hai? ");
    scanf("%d", &age);
    
    if(age>=18||gender=='f'){
        printf("Puoi entrare!");
    }
    else{
        printf("Non puoi entrare!");
    }
    
    return 0;
}
