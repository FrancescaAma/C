#include <stdio.h>

int main() {
    FILE *inf=fopen("input.txt", "r");
    int number;
    
    if (inf == NULL) {
        perror("Errore nell'apertura del file di input");
        return 1;
    }

    if (fscanf(inf, "%d", &number) != 1) {
        perror("Errore nella lettura del numero");
        fclose(inf);
        return 1;
    }
    fclose(inf);

    FILE *outf = fopen("output.txt", "w");
    fprintf(outf, "%d\n", number + 1);
    fclose(outf);
    
    printf("Operazione completata. Risultato scritto in output.txt\n");

    return 0;
}
