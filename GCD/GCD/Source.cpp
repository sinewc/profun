#include<stdio.h>
int gcd(int x, int y) {
	int m = x < y ? x : y;
	for (int i = m; i >= 1; i--) {
		if (x % i == 0 && y % i == 0) {
			return i;
		}
	}
}
int main() {
	int x, y;
	printf("Enter first number = ");
	scanf_s("%d", &x);
	printf("Enter second number = ");
	scanf_s("%d", &y);
	printf("Greatest common divisor = %d", gcd(x, y));
	return 0;
}