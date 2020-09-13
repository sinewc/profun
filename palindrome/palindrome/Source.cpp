#include <stdio.h>
#include <string.h>
int main() {
    char strx[50];
    scanf_s("%s", strx,50);
    int w, x = 0;
    w = strlen(strx);

    for (int i = 0; i <  w / 2; i++) {
        if (strx[i] == strx[w - 1 - i]) {
            x++;
        }
    }
    if (x == w / 2)
        printf("Palindrome");
    else
        printf("Not Palindrome.");

    return 0;
}