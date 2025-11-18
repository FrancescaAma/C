#include <stdio.h>
int main()
{
	char scelta;
	do
	{
		printf("l.Lunedi'\n");
		printf("m.Martedi'\n");
		printf("g.Giovedi'\n");
		printf("v.Venerdi'\n");
		printf("s.Sabato\n");
		printf("d.Domenica\n");
		printf("0.Esci\n");
		printf("Inserisci la scelta: ");
		scanf(" %c", &scelta);
		switch(scelta)
			{
				case 'l':
				printf("Lunedi'\n");
    			break;
				
				case 'm':
				printf("Martedi'\n");
				break;
				
				case 'g':
				printf("Giovedi'\n");
				break;
				
				case 'v':
				printf("Venerdi'\n");
				break;
				
				case 's':
				printf("Sabato\n");
				break;
				
				case 'd':
				printf("Domenica\n");
				break;
				
				case '0':
				printf("Uscita dal programma...\n");
				break;
				
				default:
				printf("Lettera non valida \n");
			}
			
			printf("\n");
			
	}while(scelta!='0');
}
