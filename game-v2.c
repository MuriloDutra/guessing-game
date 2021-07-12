#include <stdio.h>

int main(void){
    printf("\n");
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de Adivinhação! *\n");
    printf("*************************************\n\n");

    int secret_number = 42;
    int user_attempt;
    int numbers_are_equal;
    int won_the_game = 0;
    int counter = 1;
    double score = 1000;

    while(!won_the_game){
        printf("TENTATIVA - %d\n\n", counter);
        printf("Qual é o seu chute? ");
        scanf("%d", &user_attempt);

        if(user_attempt < 0){
            printf("Não é permitido chutar números negativos.\n");
            continue;
        }

        numbers_are_equal = user_attempt == secret_number;

        if(numbers_are_equal){
            printf("PARABÉNS, você acertou!\n");
            won_the_game = 1;
        }
        else{
            int smaller = (user_attempt < secret_number);

            if(smaller)
                printf("O seu chute foi MENOR que o número secreto.\n");
            else
                printf("O seu chute foi MAIOR que o número secreto.\n");
        }
        printf("\n");
        counter++;
        double lost_points = (user_attempt - secret_number) / (double) 2;

        score -= (lost_points < 0)
            ? (-lost_points)
            : lost_points;
    }
    printf("Você acertou em %d tentativas.\n", counter - 1);
    printf("Total de pontos: %.2f\n", score);
}
