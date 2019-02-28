#include <stdio.h>

int main() {
    int c, prev;

    prev = EOF;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
             putchar(c);
             prev = c;
        } else if (prev != c){
             putchar(c);
             prev = c; 
        }
    }
    return 1;
}
