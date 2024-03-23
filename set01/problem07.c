#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        sum += i;
    }
    printf("Sum of all natural number until %d is: %d\n",n,sum);
    return 0;
}
