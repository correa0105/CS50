#include <cs50.h>
#include <stdio.h>

int main(void) {
    char c = get_char("Você esta bem?");

    if (c == 'y' || c == 'Y') {
        printf("Estou bem!\n");
    } else if (c == 'n' || c == 'N') {
        printf("Não estou bem...\n");
    }
}