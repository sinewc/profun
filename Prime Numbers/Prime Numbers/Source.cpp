#include <stdio.h>
int power(int x, int y);

int main() {
    int num, p;
    unsigned long long  sum;
    printf("number: ");
    scanf_s("%d", &num);
    printf("power number: ");
    scanf_s("%d", &p);
    sum = power(num, p);
    printf("%d^%d = %u", num, p, sum);
    return 0;
}

int power(int num, int p) {
    if (p != 0)
        return (num * power(num, p - 1));
    else
        return 1;
}



