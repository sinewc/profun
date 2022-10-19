#include<stdio.h>
#include<cmath>
int main()
{
	int num1, num2, i;
	float n = 0, sum = 0, sum2 = 0, average, sd;
	scanf_s("%d %d", &num1, &num2);
	if (num1 < num2)
	{
		for (i = num1; i <= num2; i++) {
			printf("%d ", i);
			n++;
			sum += i;
			sum2 += i * i;
		}
	}
	else if (num1 > num2)
	{
		for (i = num1; i >= num2; i--) {
			printf("%d ", i);
			n++;
			sum += i;
			sum2 += i * i;
		}
	}
	else if (num1 == num2)
	{
		printf("Average = %d", num1);
		printf("\nSD = 0.00");
		return 0;
	}

	average = sum / n;
	sd = sqrt(((n * sum2) - (sum * sum)) / (n * (n - 1)));
	printf("\nAverage = %.1f", average);
	printf("\nSD = %.2f", sd);
	return 0;
}