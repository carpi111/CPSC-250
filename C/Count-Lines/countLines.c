#include <stdio.h>

int main()
{
    int c, n_line;
    n_line = 0;

    while ( (c = getchar()) != EOF )
    {
        if (c == '\n')
        {
            ++n_line;
        }
    }

    printf("There are %d lines.\n", n_line);
}
