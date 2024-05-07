#include <stdio.h>

int main (void)
{
    int a = 5;
    int *p;
    p = &a;

    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Address of p: %p\n", &p);
}