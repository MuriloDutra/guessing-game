#include <stdio.h>

int main(void){
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de Adivinhação! *\n");
    printf("*************************************\n");

    int secret_number = 42;
    int user_attempt;

    printf("Qual é o seu chute? ");
    scanf("%d", &user_attempt);
    printf("Seu chute foi: %d\n", user_attempt);

    if(user_attempt == secret_number)
        printf("Parabéns, você acertou!\n");
    else
        printf("Você errou!\n");
}
