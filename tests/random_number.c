#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int seconds = time(0);
    srand(seconds);
    int number01 = rand();
    int number02 = rand();

    printf("NUMBER 01: %d | NUMBER 02: %d\n", number01, number02);
}