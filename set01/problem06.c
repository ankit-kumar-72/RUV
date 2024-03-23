#include<stdio.h>
void greatest(int *a, int *b, int *c, int *largest);
int main()
{
    int a , b,c, largest;
    printf("Enter your 1st number: ");
    scanf("%d",&a);
    printf("Enter your 2nd number: ");
    scanf("%d",&b);
    printf("Enter your 3rd number: ");
    scanf("%d",&c);
    greatest(&a, &b, &c, &largest);
    printf("The largest of %d,%d and %d is %d",a,b,c,largest);
    return 0;
}
void greatest(int *a, int *b, int *c, int *largest)
{
    if(*a>=*b && *a>=*c){
        *largest = *a;
    }
    else if(*b>=*c){
        *largest = *b;
    }
    else{
        *largest = *c;
    }
}