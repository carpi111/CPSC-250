#include <stdio.h>

int main()
{
    while (1 == 1)
    {
        printf("Please enter a lower case letter: ");
        char c;
        c = getchar();
        getchar();

        if (c >= 'a' && c <= 'z' && c != '\n')
        {
            c = (c - 32);
            putchar(c);
            printf("\n");
            break;
        }

        else
        {
            printf("You entered an upper case letter. Try again.\n");
        }
    }
}
