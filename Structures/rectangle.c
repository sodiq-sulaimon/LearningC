#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1 = {8, 12};
    printf("Size: %lu\n", sizeof(r1));
    printf("Length: %d\n", r1.length);
    printf("Breadth: %d\n", r1.breadth);
    printf("Area: %d\n", r1.length * r1.breadth);
}