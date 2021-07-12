#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = abs(3);
    int b = abs(-3);
    printf("A: %d | B: %d\n", a, b);

    int x = 3;
    int y = -3;
    printf("X: %d | Y: %d\n", x, (y * -1));

    int w = 3;
    int q = -3;
    printf("W: %d | Q: %d\n", w, (-q));
}