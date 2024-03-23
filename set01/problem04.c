#include<stdio.h>
void addition(int *a, int *b, int *sum);
int main()
{
    int a , b, sum;
    printf("Enter your 1st number: ");
    scanf("%d",&a);
    printf("Enter your 2nd number: ");
    scanf("%d",&b);
    addition(&a,&b,&sum);
    printf("The sum of %d and %d is %d", a,b,sum);
    return 0;
}
void addition(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
