#include<stdio.h>
//Returns trur if n is even, else odd
int isEven(int num)
{
    //num & 1 is 1, then odd, else even
    return (!(num & 1));
}
//driver code
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    isEven(num)? printf("Even"): printf("Odd");

    return 0 ;
}