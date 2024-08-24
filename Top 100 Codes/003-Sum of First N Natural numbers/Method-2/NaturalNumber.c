#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    int sum = n*(n +1)/2;

    printf("The sum is %d", sum);

    return 0;
}
//Time Complexity : o(1)
//Space Complexity : o(1)