#include <cs50.h>
#include <stdio.h>

int get_int_positivo(void) {
    int n;

    do {
        n = get_int("Digite um numero positivo inteiro: ");
    } while (n < 1);

    return n;
}

int get_int_positivo(void);

int main(void) {
    int positivo = get_int_positivo();
    printf("Voce digitou um numero positivo %i ", positivo);
}
