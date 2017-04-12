#include <stdio.h>

int main()
{
    int c, numLines, numWords, numChars, inWord;
    numLines = 0;
    numWords = 1;
    numChars = 0;
    inWord = 0;

    while ( (c = getchar()) != EOF )
    {
        ++numChars;

        if (c == '\n')
        {
            ++numLines;
        }

        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            inWord = 1;
        }

        else
        {
            if (inWord == 1)
            {
                ++numWords;
            }
            inWord = 0;
        }
    }

    printf("There are %i lines.\n", numLines);
    printf("There are %i words.\n", numWords);
    printf("There are %i chars.\n", numChars);
}
