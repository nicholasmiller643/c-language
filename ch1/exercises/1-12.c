#include <stdio.h>

#define FIRST 1
#define SECOND 2

int main() {
    int c, first;

    first = FIRST;

    while ((c = getchar()) != EOF) {
        if (c  == '\t' || c == ' ') {
            if (first == FIRST) {
                putchar('\n');
                first = SECOND;
            }
        }
        else {
            putchar(c);
            first = FIRST;
        }
    }
}
