#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d",&number);

    //checking if the number is divisible by 2
    if(number % 2 == 0)
         printf("Even");
    else
       printf("Odd");

    return 0;
}