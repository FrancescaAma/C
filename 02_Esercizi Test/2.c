#include <stdio.h>
#include <limits.h>

float calcola_media(float v[], int n){
	int i, somma=0;
	for(i=0; i<n; i++){
		somma=somma+v[i];
	}
	return (float)somma/i;
}

float trova_massimo(float v[], int n){
	int i, max=0;
	for(i=0; i<n; i++){
		if(v[i]>max){
			max=v[i];
		}	
	}
	return max;
}

float trova_minimo(float v[], int n){
	int i, min=INT_MAX;
	for(i=0; i<n; i++){
		if(v[i]<min){
			min=v[i];
		}	
	}
	return min;
}

int conta_maggiori_di_media(float v[], int n){
	int i,k=0;
	float media;
	media=calcola_media(v, n);
	for(i=0; i<n; i++){
		if(v[i]>media){
			k++;
		}
	}
	return k;
}

int main(){
	int N, i, max, min, magmedia;
	float media=0;
	
	do{
		printf("Inserisci il numero di giorni: ");
		scanf("%d", &N);
		if(N<1||N>31){
			printf("Hai inserito il numero dei giorni sbagliato, i giorni devono essere compresi tra 1 e 31.\n");
		}
	}while(N<1||N>31);
	
	float v[N];
	
	for(i=0; i<N; i++){
		printf("Inserisci la temperatura del %d^ giorno: ", i+1);
		scanf("%f", &v[i]);
	}
	
	media=calcola_media(v, N);
	printf("La media dei giorni e': %.2f\n", media);
	
	max=trova_massimo(v, N);
	printf("La temperatura massima e': %d\n", max);
	
	min=trova_minimo(v, N);
	printf("La temperatura minima e': %d\n", min);
	
	magmedia=conta_maggiori_di_media(v, N);
	printf("I giorni che hanno una temperatura maggiore della media sono: %d", magmedia);

}
