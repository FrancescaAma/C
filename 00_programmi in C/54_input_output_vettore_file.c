#include <stdio.h>
#define MAX_NUM 100

int main() {
	
    FILE *inf = fopen("input.txt", "r");
    int numbers[MAX_NUM];
    int count = 0, i;

    if (inf == NULL) {
        perror("Errore nell'apertura del file di input");
        return 1;
    }

    while (count < MAX_NUM && fscanf(inf, "%d", &numbers[count]) == 1) {
        count++;
    }
    fclose(inf);

    for (i = 0; i < count; i++) {
        numbers[i] += 1;
    }

    FILE *outf = fopen("output.txt", "w");
    if (outf == NULL) {
        perror("Errore nell'apertura del file di output");
        return 1;
    }

    for (i = 0; i < count; i++) {
        fprintf(outf, "%d\n", numbers[i]);
    }
    fclose(outf);

    printf("Operazione completata. Risultato scritto in output.txt\n");

    return 0;
}
