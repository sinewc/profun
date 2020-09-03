#include<stdio.h>
int main() {
	int i, j, total;
	for (i = 1; i <= 10000; i++) {
		total = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0)
				total += j;
		}
		if (total == i)
			printf("%d ", i);
	}
	return 0;
}