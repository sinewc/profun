#include<stdio.h>
int main() {
	int x, i = 2, sum = 0;
	printf("Enter number = ");
	scanf_s("%d", &x);
	printf("Factoring Result : ");
	for (; x != 1; i++) {
		if (x % i == 0) {
			printf("%d", i);
			x = x / i;
			if (x != 1) {
				printf(" x ");
				i = 1;
			}
		}
	}
	return 0;
}