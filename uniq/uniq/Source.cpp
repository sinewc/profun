#include <stdio.h>
#include <string.h>
char strx[50];
char clone[50];
int main() {
    int w, i, j = 0, x = 0;
    scanf_s("%s", strx,50);
    w = strlen(strx);
    int count = 0;
    for (i = 0; i < w; i++) {
        if (i == 0) {
            clone[count] = strx[i];
            count += 1;
        }
        else if (clone[count - 1] != strx[i]) {
            clone[count] = strx[i];
            count += 1;

        }

    }
     printf("%s",clone);
    return 0;
}