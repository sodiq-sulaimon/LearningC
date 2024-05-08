#include <stdio.h>

void foo(int A[], int n) // A* can also be used instead of A[]
{
    for(int i = 0; i < n; i++){
        A[i] += 2;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    foo(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}