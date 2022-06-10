#include <cs50.h>
#include <stdio.h>

void meow(int qntdMeow) {
    for (int counter = 1; counter <= qntdMeow; counter++)
    printf("Meow!\n");
}

int main(void) {
    meow(5);
}