#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product, quotient, remainder;
    
    printf("\n\n\t\tMini Calculator\n");
    printf("\n\tEnter num1: \t");
    scanf("%d",&num1);
    printf("\n\tEnter num2: \t");
    scanf("%d",&num2);
    
    product = num1 * num2;
    sum = num1 + num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    remainder = num1 % num2;
    
    printf("\n\n\t\tResults: \n");
    printf("\n\tProduct: \t%d",product);
    printf("\n\tSum: \t\t%d",sum);
    printf("\n\tDifference: \t%d",difference);
    printf("\n\tQuotient: \t%d",quotient);
    printf("\n\tRemainder: \t%d",remainder);
}