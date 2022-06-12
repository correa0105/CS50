#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main (void) {

    string texto = get_string("Digite sua String: ");
    int letras = 0;
    int palavras = 1;
    int sentencas = 0;

    for (int i = 0; i < strlen(texto); i++) {

        if ((texto[i] > 65 && texto[i] < 90) || (texto[i] > 97 && texto[i] < 122)) {    // PODERIA SIMPLESMENTE UTILIZAR O ISALPHA DO C COM A BIBLIOTECA CTYPE
            letras++;

        } else if (texto[i] == ' ') {
            palavras++;

        } else if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?') {
            sentencas++;
        }
    }

    float L = ((float)letras / (float)palavras) * 100;
    float S = ((float)sentencas / (float)palavras) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1) {
        printf("Before Grade 1\n");
    } else if (index > 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", index);
    }

}