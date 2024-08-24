#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i <= n; i++)
       //is same as writing sum = sum + i
    sum += i;

    printf("Sum is %d", sum);

    return 0;
}

//Time complaxity : o(n)
//Space complexity : o(1)