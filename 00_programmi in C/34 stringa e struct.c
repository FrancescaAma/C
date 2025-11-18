#include <stdio.h>
#include<string.h>
#define DIM 30

struct Persona{
    char nome[DIM];
    char cognome[DIM];
    int eta;
};

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main()
{
    struct Persona p;
    printf("Nome: ");
    leggiStringa(p.nome, DIM);

    printf("Cognome: ");
    leggiStringa(p.cognome, DIM);

    printf:("Eta': ");
    scanf("%d", &p.eta);

    printf("Nome: %s,\nCognome: %s,\nEta': %d", p.nome, p.cognome, p.eta);

    return 0;
}
