#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

int main() {
    char username[DIM], pass[DIM];
    int i, haMaiuscola = 0;

    printf("Username: ");
    fgets(username, DIM, stdin);
    if (username[strlen(username) - 1] == '\n')
        username[strlen(username) - 1] = '\0';
    else
        while (getchar() != '\n');

    printf("Password: ");
    fgets(pass, DIM, stdin);
    if (pass[strlen(pass) - 1] == '\n')
        pass[strlen(pass) - 1] = '\0';
    else
        while (getchar() != '\n');

    printf("\nUsername = %s\n", username);
    printf("Lunghezza username = %lu\n", strlen(username));

    if (strlen(pass) < 12) {
        printf("? La password deve contenere almeno 12 caratteri.\n");
    }

    if (!isupper(pass[0])) {
        printf("? La prima lettera deve essere maiuscola.\n");
    }

    for (i = 0; pass[i] != '\0'; i++) {
        if (isupper(pass[i])) {
            haMaiuscola = 1;
        }
    }

    if (!haMaiuscola) {
        printf("? La password deve contenere almeno una lettera maiuscola.\n");
    }

    printf("? Password valida!\n");

    return 0;
}
