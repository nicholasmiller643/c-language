#include <stdio.h>

#define MAXLEN 255

int main()
{
    int char_freq[MAXLEN], c, i;
    for (i = 0; i < MAXLEN; ++i)
        char_freq[i] = 0;

    while ((c = getchar()) != EOF)
    {
        char_freq[c]++;
    }
    for (i = 0; i < MAXLEN; ++i)
    {
        if (i == '\t')
            printf("\\t");
        else if (i == '\n')
            printf("\\n");
        else {
            printf(" %c", i);
        }
        for (int k = 0; k < char_freq[i]; ++k){
            putchar('x');
        }
        putchar('\n');
    }
}
