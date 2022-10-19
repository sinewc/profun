#include<stdio.h>
void square(int n) {
    int i = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                printf("%d", j);
            else
                printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf_s("%d", &n);
    square(n);
    return 0;
}