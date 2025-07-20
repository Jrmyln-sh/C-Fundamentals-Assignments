#include <stdio.h>

int main()
{
	float prelim, midterm, finals, totalSum, average;

	printf("\n\n\t\tGrade Calculator \n");

	printf("\n\tEnter your prelim: \t");
	scanf("%f",&prelim);

	printf("\n\tEnter your midterm: \t");
	scanf("%f",&midterm);

	printf("\n\tEnter your fianls: \t");
	scanf("%f",&finals);
	
	totalSum = prelim + midterm + finals;
	average = totalSum / 3;

	printf("\n\n\t\tResults:");

	printf("\n\tYour General Average: \t%f",average);


}