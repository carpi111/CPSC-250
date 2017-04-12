#include <stdio.h>

void swap(int *x, int *y)
{
    printf("pointer 1 = %p\n", x);
    printf("pointer 2 = %p\n", y);

    int *temp = x;
    x = y;
    y = temp;

    printf("pointer 1 = %p\n", x);
    printf("pointer 2 = %p\n", y);
}

int main()
{
    int a = 7;
    int b = 9;

    int *pa = &a;
    int *pb = &b;

    swap(pa, pb);
}
