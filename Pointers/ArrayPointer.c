#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 2; p[1] = 5; p[2] = 9; p[3] = 1; p[4] = 8;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }
    printf("Size: %lu\n", sizeof(p)); // pointer size is 8 bytes irrespective of the data type.

    int A[] = {2, 3, 4, 5, 6};
    int *ptr;
    ptr = A;
    printf("%d\n", ptr[0]);

    free(p);
    return 0;
}