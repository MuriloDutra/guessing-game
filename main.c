#include <stdio.h>

int main(void){
    printf("\n");
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de Adivinhação! *\n");
    printf("*************************************\n\n");

    int secret_number = 42;
    int user_attempt;
    int numbers_are_equal;

    printf("Qual é o seu chute? ");
    scanf("%d", &user_attempt);
    numbers_are_equal = user_attempt == secret_number;

    if(numbers_are_equal)
        printf("PARABÉNS, você acertou!\n");
    else{
        int smaller = (user_attempt < secret_number);

        if(smaller)
            printf("O seu chute foi MENOR que o número secreto.\n");
        else
            printf("O seu chute foi MAIOR que o número secreto.\n");
    }
    printf("\n");
}
