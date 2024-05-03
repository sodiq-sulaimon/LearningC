#include <stdio.h>

int main (void) {
    int height;
    int length;
    int width;
    int volume;

    printf("\aEnter height of box (in): ");
    scanf("%d", &height);
    printf("Enter length of box (in): ");
    scanf("%d", &length);
    printf("Enter width of box (in): ");
    scanf("%d", &width);

    printf("\aVolume: %d cubic inches\n", height * length * width);

    return 0;
}