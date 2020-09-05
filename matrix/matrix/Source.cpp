#include<stdio.h>
int main() {
    int num1, num2, m[100][100], n[100][100], a, b;
    printf("Matrix : ");
    scanf_s("%d %d", &num1, &num2);
    for (a = 0; a < num1; a++) {
        for (b = 0; b < num2; b++) {
            scanf_s("%d", &m[a][b]);
        }
        printf("\n");
    }

    for (a = 0; a < num1; a++) {
        for (b = 0; b < num2; b++) {
            scanf_s("%d", &n[a][b]);
        }
        printf("\n");
    }

    for (a = 0; a < num1; a++) {
        for (b = 0; b < num2; b++) {
            printf("%d ", n[a][b] + m[a][b]);
        }
        printf("\n");
    }
    return(0);
}