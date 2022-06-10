#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {

    int contadorDeMoedas = 0;
    float troco;
    float umCentavo = 1;
    float cincoCentavos = 5;
    float dezCentavos = 10;
    float vinteCincoCentavos = 25;
    float cinquentaCentavos = 50;

    do {

    troco = (get_float("Quanto deu de troco?: ")*100);

    } while (troco <= 0);

    while (troco - cinquentaCentavos >= 0){
        troco = troco - cinquentaCentavos;
        contadorDeMoedas++;
        printf("Te dou uma moeda de 50 Centavos e voce fica com: %.2f\n", troco / 100);
    }

    while (troco - vinteCincoCentavos >= 0){
        troco = troco - vinteCincoCentavos;
        contadorDeMoedas++;
        printf("Te dou uma moeda de 25 Centavos e voce fica com: %.2f\n", troco / 100);
    }

    while (troco - dezCentavos >= 0){
        troco = troco - dezCentavos;
        contadorDeMoedas++;
        printf("Te dou uma moeda de 10 Centavos e voce fica com: %.2f\n", troco / 100);
    }

    while (troco - cincoCentavos >= 0){
        troco = troco - cincoCentavos;
        contadorDeMoedas++;
        printf("Te dou uma moeda de 5 Centavos e voce fica com: %.2f\n", troco / 100);
    }

    while (troco - umCentavo >= 0){
        troco = troco - umCentavo;
        contadorDeMoedas++;
        printf("Te dou uma moeda de 1 Centavo e voce fica com: %.2f\n", troco / 100);
    }

    printf("\n\nTe dei ao todo %i moedas...\n", contadorDeMoedas);
}