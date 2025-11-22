#include <stdio.h>

int main()
{
	
	int scelta=0, a, b, somma, differenza, molti, divi; 
	
	do
	{
		printf("1.Somma\n");
		printf("2.Differenza\n");
		printf("3.Moltiplicazione\n");
		printf("4.Divisione\n");
		printf("0.Esci\n");
		printf("Inserisci la scelta: ");
		scanf("%d", &scelta);
		
		if(scelta<0||scelta>4)
		{
			printf("Scelta non valida \n");
		}
		else
		{

			if(scelta==1)
			{
    			printf("Inserisci il primo numero: ");
    			scanf("%d",&a);
    			printf("Inserisci il secondo numero: ");
    			scanf("%d",&b);
    			somma=a+b;
    			printf("La somma e': %d\n",somma);
    		}
	
			else if(scelta==2)
			{
    			printf("Inserisci il primo numero: ");
    			scanf("%d",&a);
    			printf("Inserisci il secondo numero: ");
    			scanf("%d",&b);
    			differenza=a-b;
				printf("La sottrazione e': %d\n", differenza);
			}

			else if(scelta==3)
			{
    			printf("Inserisci il primo numero: ");
    			scanf("%d",&a);
    			printf("Inserisci il secondo numero: ");
    			scanf("%d",&b);
    			molti=a*b;
				printf("La moltiplicazione e': %d\n", molti);
			}

			else if(scelta==4)
			{
    			printf("Inserisci il primo numero: ");
    			scanf("%d",&a);
    			printf("Inserisci il secondo numero: ");
    			scanf("%d",&b);
    			divi=a/b;
				printf("La divisione e': %d\n", divi);
			}
		}
	
	}while(scelta!=0);
}
