#include <stdio.h>
#include <cs50.h>

int main(void){
    string armazenaNome = get_string("Qual seu nome? ");
    printf("Olá, %s", armazenaNome);
}