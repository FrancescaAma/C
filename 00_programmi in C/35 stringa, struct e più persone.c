#include <stdio.h>
#include<string.h>
#define DIM 3
#define FELISH while (getchar()!='\n');

struct Persona{
    char nome[30];
    char cognome[30];
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
	int i;
	struct Persona p [DIM];
	
	for(i=0; i<DIM; i++){
    	printf("Nome: ");
    	leggiStringa(p[i].nome, 30);

    	printf("Cognome: ");
    	leggiStringa(p[i].cognome, 30);

   	 	printf("Eta': ");
    	scanf("%d", &p[i].eta);
    	FELISH;
	}
	
	printf("------ LISTA PERSONE ------\n");
	
	for(i=0; i<DIM; i++){
    	printf("Individuo n.%d =\nNome: %s,\nCognome: %s,\nEta': %d\n\n", i+1, p[i].nome, p[i].cognome, p[i].eta);
	}
    return 0;
}
