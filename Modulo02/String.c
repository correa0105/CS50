#include <stdio.h>
#include <cs50.h>
#include <string.h>

const int total = 3;

float media();

int main(void) {

    string string = get_string("Entrada: \n");
    int tamanhoString = strlen(string);

    for (int i = 0; i < tamanhoString; i++) {
        printf("Letra nº %i, é: %c\n", i, string[i]);
    }

}