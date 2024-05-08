#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r)
{
    return r.length * r.breadth;
};

int main()
{
    struct Rectangle rec = {3, 8};
    printf("Area: %d\n", area(rec));
}