#include <stdio.h> 
#include <conio.h>
#define ROW 5
#define COL 15
#define line1 "  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15"
#define line2 "+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
void dspSeat(void);
char seat[ROW][COL];
int main() {
	int row, col;
	seat[0][0] = seat[0][1] = seat[0][2] = seat[0][3] = seat[0][4] = 'x';
	seat[3][7] = seat[2][0] = seat[4][14] = seat[1][8] = seat[2][12] = seat[3][6] = seat[4][11] = seat[4][1] = seat[2][3] = '.';
	seat[0][10] = seat[0][11] = seat[0][12] = seat[0][13] = seat[0][14] = 'ß';
	for (;;) {
		dspSeat();
		printf("\nEnter floor and number => ");
		scanf_s("%d %d", &row, &col);
		if (row == 99 && col == 99)
			break;
		else if (row > 5 || col > 15) {
			printf("Something wrong");
		}
		else if (seat[row - 1][col - 1] == 'x') {
			printf("\nThis room is for the office...");
		}
		else if (seat[row - 1][col - 1] == 'ß') {
			printf("\nThis room is for the restaurant...");
		}
		else if (seat[row - 1][col - 1] == '.') {
			printf("\nThis room is an empty room...");
		}
		else {
			seat[row - 1][col - 1] = 'P';
		}
	}
	printf("thank you...");
}

void dspSeat(void) {
	int i, j;
	printf("\n\t\t<SANSUK CONDOMINIUM>\n\n");
	printf("   %s\n", line1);
	for (i = ROW; i >= 1; i--) {
		printf("   %s\n", line2);
		printf("%2d ", i);
		for (j = 1; j <= COL; j++)
			printf("| %c", seat[i - 1][j - 1]);
		printf("| \n");
	}
	printf("   %s\n", line2);
	printf("\tX=Block  P=Paid  .=Empty  ß =restaurant\n");
}