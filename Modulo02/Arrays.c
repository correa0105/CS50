#include <stdio.h>
#include <cs50.h>

const int total = 3;

float media();

int main(void) {

    int score[total];

    for (int nota= 0; nota < total; nota++ ) {
        score[nota] = get_int("Digite sua nota!: ");
    }

    printf("Média: %f\n", media(total, score));
}

float media(int tamanho, int array[]) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
         soma += array[i];
    }
    return soma / tamanho;
}