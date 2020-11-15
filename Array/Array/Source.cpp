#include <stdio.h>

void inputArray(int* arr, int size);
int search(int* arr, int size, int toSearch);

int main()
{
    int array[100];
    int size, toSearch, searchIndex;

    printf("Enter size of array: ");
    scanf_s("%d", &size);

    printf("Enter numbers in array: ");
    inputArray(array, size);

    printf("Enter number to search: ");
    scanf_s("%d", &toSearch);
    searchIndex = search(array, size, toSearch);

    if (searchIndex == -1) {
        printf("%d does not exists in array.", toSearch);
    }
    else {
        printf("%d is first found at %d position.", toSearch, searchIndex + 1);
    }

    return 0;
}

void inputArray(int* arr, int size)
{
    int* arrEnd = (arr + size - 1);
    while (arr <= arrEnd)
    {
        scanf_s("%d", arr++);
    }
}

int search(int* arr, int size, int toSearch)
{
    int index = 0;
    int* arrEnd = (arr + size - 1);
    while (arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }

    if (arr <= arrEnd) {
        return index;
    }

    return -1;
}