#include<stdio.h>

int getsum(int sum, int n)
{
    if(n == 0)
       return sum;

    return n + getsum(sum, n-1);
}

int main(){
    int n, sum = 0;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    printf("%d", getsum(sum , n));

    return 0;
}
// Time complexity : O(n)
// Space complexity : O(1)
// Auxilary space complexity : O(N)
// Due to function call stack