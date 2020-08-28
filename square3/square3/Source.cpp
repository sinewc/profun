#include<stdio.h>
int main() {
    int x, i, j;
    printf("Enter number : ");
    scanf_s("%d", &x);
    if (x == 1) {
        printf("*");
        return 0;
    }
    else {
        for (i = 0; i < x; i++) {
            for (j = 0; j < x; j++) {
                if (i == 0 || j == 0 || i == x - 1 || j == x - 1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}