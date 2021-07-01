#include <stdio.h>

int main(void){
    int x;
    int y;

    printf("****************************************\n");
    printf("Vamos multiplicar dois números? Vamos lá.\n");
    printf("****************************************\n\n");
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    printf("O resultado da multiplicação entre %d e %d é: %d\n", x, y, (x * y));
}