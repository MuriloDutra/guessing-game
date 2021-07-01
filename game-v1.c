#include <stdio.h>
#define QUANTITY_OF_ATTEMPTS 5

int main(void){
    printf("\n");
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de Adivinhação! *\n");
    printf("*************************************\n\n");

    int secret_number = 42;
    int user_attempt;
    int numbers_are_equal;

    for(int i = 1; i <= QUANTITY_OF_ATTEMPTS; i++){
        printf("TENTATIVA %d - %d.\n", i, QUANTITY_OF_ATTEMPTS);
        printf("Qual é o seu chute? ");
        scanf("%d", &user_attempt);

        if(user_attempt < 0){
            printf("Não é permitido chutar números negativos.\n");
            i--;
            continue;
        }

        numbers_are_equal = user_attempt == secret_number;

        if(numbers_are_equal){
            printf("PARABÉNS, você acertou!\n");
            break;
        }
        else{
            int smaller = (user_attempt < secret_number);

            if(smaller)
                printf("O seu chute foi MENOR que o número secreto.\n");
            else
                printf("O seu chute foi MAIOR que o número secreto.\n");
        }
        printf("\n");
    }
}
