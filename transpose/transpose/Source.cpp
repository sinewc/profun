#include <stdio.h>
#define ROWS 5
#define COLS 5

void inputMatrix(int(*mat)[COLS]);
void Matrix(int(*mat)[COLS]);
void printMatrixtranspose(int(*mat)[COLS]);

int main()
{
    int mat[ROWS][COLS];
    inputMatrix(mat);
    Matrix(mat);
    printMatrixtranspose(mat);
    return 0;
}

void inputMatrix(int(*mat)[COLS])
{
    int i, j;

    printf("Enter elements in matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf_s("%d", (*(mat + i) + j));
        }
    }
}

void Matrix(int(*mat)[COLS])
{
    int i, j;

    printf("Elements in matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void printMatrixtranspose(int(*mat)[COLS])
{
    int i, j;
    printf("Matrix transpose: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", *(*(mat + j) + i));
        }
        printf("\n");
    }
}
