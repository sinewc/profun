#include<stdio.h>
int strlen(char*);

int main() {
	char strx[50];
	int big = 0, small = 0, w = 0;
	char* p;
	scanf_s("%s",strx,50);
	p = strx;
	w = strlen(strx);
	while (*p != '\0') {
		if ((*p >= 'A') && (*p <= 'Z')) {
			big++;
		}
		else if ((*p >= 'a') && (*p <= 'z')) {
			small++;
		}
		p = p + 1;
	}
	if (w == big)
		printf("All Capital letter");
	else if (w == small)
		printf("All Small letter");
	else
		printf("Mix");

	return 0;
}
int strlen(char* p) {
	int i = 0;
	while (*(p + i) != '\0') {
		i++;
	}
	return i;
}
