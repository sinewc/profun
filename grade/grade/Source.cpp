#include<stdio.h>
int main()
{
    int i, j, total;
    char grade;
    int sc[5][4];
    printf("score of math,english,science and physics\n");
    for (i = 0; i < 5; i++) {
        printf("Person#%2d =>", i + 1);
        scanf_s("%d %d %d %d", &sc[i][0], &sc[i][1], &sc[i][2], &sc[i][3]);
        if (sc[i][0] > 25 or sc[i][1] > 25 or sc[i][2] > 25 or sc[i][3] > 25)
        {
            printf("Error");
            return 0;
        }
        
    }
    printf("\n\nPerson          math          english         science          physics          total          grade\n");
    printf("==========================================================================================================\n");

    for (i = 0; i < 5; i++) {
        total = sc[i][0] + sc[i][1] + sc[i][2] + sc[i][3];
        if (total >= 80)
            grade = 'A';
        else if (total >= 70)
            grade = 'B';
        else if (total >= 60)
            grade = 'C';
        else if (total >= 50)
            grade = 'D';
        else
            grade = 'F';
        printf("%2d\t\t %2d\t\t %2d\t\t %2d\t\t %2d\t\t %2d\t\t %c\n", i + 1, sc[i][0], sc[i][1], sc[i][2], sc[i][3], total, grade);
    }
    return 0;

}
