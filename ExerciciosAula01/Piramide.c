#include <cs50.h>
#include <stdio.h>

int main(void) {

    int altura, coluna, espaço, linha;

    do {

    altura = get_int("Altura da piramide: ");

    } while (altura < 1);

    for (linha = 1; linha <= altura; linha++) {

        for (espaço = 1; espaço <= (altura - linha); espaço++) {
            printf(" ");}

            for (coluna = 1; coluna <= linha; coluna++) {
                printf("#");}

                printf(" ");

                for (coluna = 1; coluna <= linha; coluna++) {
                    printf("#");
                }

        printf("\n");
    }
}