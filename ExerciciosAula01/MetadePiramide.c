#include <cs50.h>
#include <stdio.h>

int main(void) {

    int number;

    do {

    number = get_int("Altura da piramide: ");

    } while (number < 1);

    for (int contador1 = 1; contador1 <= number; contador1++) {
        for (int contador2 = 1; contador2 <= number; contador2++) {
            if (contador1 + contador2 <= number) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}