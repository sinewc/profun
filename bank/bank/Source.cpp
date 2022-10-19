#include<stdio.h>
int main() {
	int money, m1000, m500, m100, x, y, z;
	printf("PUT YOUR MONNEY : ");
	scanf_s("%d", &money);
	if (money >= 100)
	{
		m1000 = money / 1000;
		x = money % 1000;
		m500 = x / 500;
		y = x % 500;
		m100 = y / 100;
		printf("1000 BILL = %d", m1000);
		printf("\n500 BILL = %d", m500);
		printf("\n100 BILL = %d", m100);
	}
	else
		printf("\nDon't have bill");
	return 0;
}