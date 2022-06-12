#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void) {

    string string = get_string("Entrada: ");

    printf("Saida: ");

    for (int i = 0, n = strlen(string); i < n; i++) {
        if (string[i] >= 97 && string[i] <= 122) {
            printf("%c", string[i] - 32);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}