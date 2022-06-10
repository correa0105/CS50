#include <stdio.h>
#include <cs50.h>

//ALGORITMO LUHN

int main(void)
{
    long numeroDoCartao = get_long("Insira o numero do seu cartão: ");
    int soma1 = 0, soma2 = 0, numero = 0, resto = 0;
    long controleNumeroCartao = numeroDoCartao;

    while (controleNumeroCartao > 0) {
        numero = ((controleNumeroCartao / 10) % 10) * 2;                    // Multiplicando todos os outros dígitos por 2, começando com o penúltimo dígito do número

            while (numero > 0) {
            resto = numero % 10;
            soma1 += resto;                                                 // Somando os dígitos desses produtos
            numero /= 10;
            }

        controleNumeroCartao /= 100;
    }

                                                                            //Para restaurar os valores iniciais de Resto e controleNumeroCartao para uso no próximo loop

    resto = 0;
    controleNumeroCartao = numeroDoCartao;

    while (controleNumeroCartao > 0)
    {
        resto = controleNumeroCartao % 10;
        soma2 += resto;                                                     //Soma dos dígitos que não foram multiplicados por 2
        controleNumeroCartao /= 100;
    }

    ((soma1 + soma2) % 10) == 0 ? printf("Seu cartão é valido\n") : printf("Seu cartão é invalido\n");
    return 0;
}