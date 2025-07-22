#include <stdio.h>

int main()
{
    int unit = 3;
    char grade = 'A';
    char course [20] = "CC103";
    float avgGrade = 89.5;
    double finalGwa = 90;

    printf("\n\n\tUnits: \t\t%d",unit);
    printf("\n\n\tGrade: \t\t%c",grade);
    printf("\n\n\tCourse: \t%s",course);
    printf("\n\n\tAverage Grade: \t%f",avgGrade);
    printf("\n\n\tFinal GWA: \t%lf",finalGwa);

    return 0;
}
