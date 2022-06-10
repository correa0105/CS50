#include <stdio.h>
#include <cs50.h>

int main(void) {

    int populacaoInicial;

    do {
        populacaoInicial = get_int("População inicial de Lhamas: ");
    } while (populacaoInicial < 9);

    int populacaoFinal;

    do {
        populacaoFinal = get_int("Poplação final de Lhamas: ");
    } while (populacaoInicial > populacaoFinal);

    int anos = 0;

    do {
        populacaoInicial = populacaoInicial + (populacaoInicial/3) - (populacaoInicial/4);
        anos++;
    } while (populacaoInicial <= populacaoFinal);

    printf("Para chegar a essa população se passaram %i anos\n", anos);
}