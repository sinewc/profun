#include<stdio.h>
int main() {
	char strx[50];
	char *p;
	scanf_s("%s", strx,50);
	p = strx;
	while (*p != '\0') {
		if ((*p >= 'A') && (*p <= 'Z')) {
			printf("%c", *p - 'A' + 'a');
		}
		if ((*p >= 'a') && (*p <= 'z')) {
			printf("%c", *p - 'a' + 'A');
		}
		p = p + 1;
	}
	return 0;
}