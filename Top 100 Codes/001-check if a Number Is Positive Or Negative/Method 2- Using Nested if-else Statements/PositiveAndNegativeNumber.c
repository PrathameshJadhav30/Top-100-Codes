#include<stdio.h>

int main()
{
    int num ;
    //Take input
    printf("Enter a number: ");
    scanf("%d",&num);

    //Condition to check if num is negative/positive or zero
    if(num >= 0)
    {
        if (num == 0)
            printf("The number is 0");
        else
            printf("The number is positive");
    }
    else
       printf("The number is negative");

    return 0;
}