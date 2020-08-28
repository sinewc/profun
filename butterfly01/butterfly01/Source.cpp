#include <stdio.h>
int main() {

    int num, row, line, blank, mid;
    scanf_s("%d", &num);
    if (num > 0) {
        for (row = num; row > 1; row--) {
            for (line = num; line >= row; line--) {
                printf("*");
            }
            blank = (row * 2) - 2;
            while (blank > 1)
            {
                printf(" ");
                blank--;
            }
            for (line = row; line <= num; line++) {
                printf("*");
            }
            printf("\n");
        }

        for (mid = 0; mid < (2 * num) - 1; mid++) {
            printf("*");
        }
        printf("\n");

        for (row = 2; row <= num; row++) {
            for (line = num; line >= row; line--) {
                printf("*");
            }
            blank = (row * 2) - 2;
            while (blank > 1)
            {
                printf(" ");
                blank--;
            }
            for (line = row; line <= num; line++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}