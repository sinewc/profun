#include<stdio.h>
int result(unsigned long long n) {
	unsigned long long sum = 0;
	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}
int main() {
	unsigned long long n;
	scanf_s("%llu", &n);
	printf("%llu", n);
	while (n >= 10) {
		n = result(n);
		printf("->%llu", n);
	}
}
