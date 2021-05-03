#include <stdio.h>

void swap(int *x, int *y) {
    int tempX = *x;
    *x = *y;
    *y = tempX;
}

int main() {

    int a = 1;
    int b = 2;

    printf("a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    return 0;
}