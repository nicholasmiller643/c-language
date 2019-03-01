#include <stdio.h>

#define IN 1
#define OUT 0

#define MAXLEN 20

int main()
{
    int lwords[MAXLEN], c, i, in, count;
    count = 0;
    for (i = 0; i < MAXLEN; ++i)
        lwords[i] = 0;
    in = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (count != 0)
                lwords[count]++;
            count = 0;        
        }
        else
        {
            count++;
        }
    }
    for (i = 0; i < MAXLEN; ++i)
    {
        printf("%2d ", i);
        for (int k = 0; k < lwords[i]; ++k){
            putchar('x');
        }
        putchar('\n');
    }
}
