#include <stdio.h>

int main(void)
{
    int given_number;
    int counter = 1;

    printf("Vamos ver a tabela de um número de sua escolha?\n");
    printf("Digite um número, por favor: ");
    scanf("%d", &given_number);

    while(counter < 11)
    {
        printf("%dx%d=%d\n", given_number, counter, (given_number * counter));
        counter++;
    }
}