#include<stdio.h>
int main() {
	int shopping, hour, min, pay;
	printf("SHOPPING : ");
	scanf_s("%d", &shopping);
	printf("HOUR : ");
	scanf_s("%d", &hour);
	printf("MINUTE : ");
	scanf_s("%d", &min);
	if (shopping > -1 && hour > -1 && min > -1) {
		if (shopping >= 1000) {
			if (hour <= 3)
				printf("NO PARKING FEE");
			else {
				if (min > 0) {
					pay = (hour - 3) * 40 + 40;
					printf("PARKING FEE IS : %d ", pay);
				}
				else {
					pay = (hour - 3) * 40;
					printf("PARKING FEE IS : %d ", pay);
				}
			}
		}
		else {
			if (min > 0) {
				pay = hour * 40 + 40;
				printf("PARKING FEE IS : %d ", pay);
			}
			else {
				pay = hour * 40;
				printf("PARKING FEE IS : %d ", pay);
			}
		}
	}
	else
		printf("IT CAN'T BE NEGATIVE");
	return 0;
}

