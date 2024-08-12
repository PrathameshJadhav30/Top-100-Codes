#include<stdio.h>
int main(){
    int num;
    //take input
    printf("Enter a number: ");
    scanf("%d",&num);

    //Condition to check if the 0,positive or negative

    if (num == 0)
        printf("Zero");
    else
      (num > 0)? printf("Positive"):printf("Negative");

    return 0;
}