#include <stdio.h>

int add (int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 5;
    int num2 = 20;
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);

    return 0;
}
