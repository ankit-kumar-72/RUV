#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 5;
    int b = 4;
    int res = add(a,b);
    printf("The Addition of two number is: %d",res);
    return 0;
}
