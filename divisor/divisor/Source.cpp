#include <stdio.h>
int sum(int x, int y) {
	int z = x % y;
	return z;
}
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0) {
		printf("No mathematical definition");
	}
	else if (b == 0 && c == 0) {
		printf("b and c can't ba a divisor");
	}
	else if (b == 0) {
		printf("b can't ba a divisor");
	}
	else if (c == 0) {
		printf("c can't ba a divisor");
	}
	else if (b != 0 && c != 0) {
		if (sum(a, b) == 0 && sum(a, c) == 0) {
			printf("a can be divided by b and c");
		}
		else if (sum(a, b) == 0 && sum(a, c) != 0) {
			printf("a can't be divided by c");
		}
		else if (sum(a, b) != 0 && sum(a, c) == 0) {
			printf("a can't be divided by b ");
		}
		else if (sum(a, b) != 0 && sum(a, c) != 0) {
			printf("a can't be divided by b and c");
		}
	}
	return 0;
}