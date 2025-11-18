#include <stdio.h>
#include<string.h>
#define DIM 3
#define FFLUSH while (getchar()!='\n');

struct Persona{
    char nome[30];
    char cognome[30];
    int stip;
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
	int max = 0, min, somma=0, media=0;
	
	for(i=0; i<DIM; i++){
    	printf("Nome: ");
    	leggiStringa(p[i].nome, 30);

    	printf("Cognome: ");
    	leggiStringa(p[i].cognome, 30);

   	 	printf("Stipendio': ");
    	scanf("%d", &p[i].stip);
    	FFLUSH;
	}
	
	min = p[0].stip;
	
  	for(i=0; i<DIM; i++){
    	if(p[i].stip>max){
    	  max = p[i].stip;
    	}
    	
    	if(p[i].stip<min){
    	  min = p[i].stip;
   		}
   		
   		somma=somma+p[i].stip;
  	}
  	
	media=somma/DIM;
	
	printf("------ LISTA LAVORATORI ------\n");
	
	for(i=0; i<DIM; i++){
    	printf("Lavoratore n.%d =\nNome: %s,\nCognome: %s,\nEta': %d\n\n", i+1, p[i].nome, p[i].cognome, p[i].stip);
	}
	
	printf("------ MASSIMO E MINIMO E MEDIA ------\n");
	
	printf("Stipenedio massimo = %d\n", max); 
 
 	printf("Stipendio minimo = %d\n", min); 
 	
 	printf("Media stipendio = %d\n", media); 
 
    return 0;
}
