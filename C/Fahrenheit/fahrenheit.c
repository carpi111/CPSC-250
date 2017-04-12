#include <stdio.h>

int main()
{
    float f;

    for (float i = 200; i != 0; i = i - 10)
    {
        printf("%.0f   ", i);
        f = (i - 32) * (5.0/9.0);
        printf("%.2f\n", f);
    }
}
