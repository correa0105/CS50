#include <cs50.h>
#include <stdio.h>

int main(void) {

    printf("Com while");

    int i = 1;

    while(i <= 50) {
        printf("\nRepetindo %i vez...", i);
        i++;
    }

    printf("\nCom for");

    for(int counter = 1; counter <= 10; counter++) {
        printf("\nRepetindo %i vez...", counter);
    }

}