#include <stdio.h>

int main() {
    int lineCount, blankCount, tabCount, c;
    lineCount = 0;
    blankCount = 0;
    tabCount = 0;
    while ((c=getchar()) != EOF) {
        if (c == '\n') {
            lineCount++;
        } else if (c == ' ') {
            blankCount++;
        } else if (c == '\t') {
            tabCount++;
        }
        printf("New Lines: %3d Blanks: %3d Tabs: %3d\n", lineCount, blankCount, tabCount);
    }
    return 1;
}
