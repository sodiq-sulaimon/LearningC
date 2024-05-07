#include <stdio.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 8;
    int y = 5;
    swap(&x, &y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);
}