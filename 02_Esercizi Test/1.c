#include <stdio.h>
#include <limits.h>

int main(){
	
	int i=0, num, somma=0, max=0, min=INT_MAX, pari=0, dispari=0;
	float media=0;
	
	do{
		printf("Inserisci un numero intero, positivo o negativo (usa lo 0 per fermarti): ");
		scanf("%d", &num);
		
		if(num!=0){
			i++;
			
			somma=somma+num;
		
			if(num>max){
				max=num;
			}
		
			if(num<min){
				min=num;
			}
			
			if(num%2==0){
				pari++;
			}
			else
			{
				dispari++;
			}
		
		}
		else
		{
			printf("Hai inserito solo uno 0.");
		}
	}while(num!=0);
	
	if(num!=0){
		
		media=(float)somma/i;
	
		printf("Sono stati inseriti %d numeri\n", i);
		printf("La somma di tutti i numeri e': %d\n", somma);
		printf("La media di tutti i numeri e': %.2f\n", media);
		printf("Il valore massimo e': %d\n", max);
		printf("Il valore minimo e': %d\n", min);
		printf("I numeri pari sono: %d\n", pari);
		printf("I numeri dispari sono: %d\n", dispari);
	}
	return 0;
}
