#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void changeLength(struct Rectangle *r)
{
    r->length *= 2;
    r->breadth *= 3;
};

int main()
{
    struct Rectangle rec = {3, 8};
    changeLength(&rec);

    printf("length: %d\n", rec.length);
    printf("breadth: %d\n", rec.breadth);
}