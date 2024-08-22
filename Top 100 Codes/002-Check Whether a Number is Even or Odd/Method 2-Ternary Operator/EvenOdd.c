#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: \n");
    scanf("%d", &number);

    //Checking if the number is divisible by 2
    number %2 == 0 ? printf("Even") : printf("odd");

    return 0;
}