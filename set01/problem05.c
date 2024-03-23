#include<stdio.h>
void Greatest(int a, int b, int c)
{
    if(a>=b && a>=c){
        printf("The largest of %d,%d and %d is %d",a,b,c,a);
    }
    else if(b>=c){
        printf("The largest of %d,%d and %d is %d",a,b,c,b);
    }
    else{
        printf("The largest of %d,%d and %d is %d",a,b,c,c);
    }
}
int main()
{
    int a, b,c;
    printf("Enter your 1st Value: ");
    scanf("%d",&a);
    printf("Enter your 2nd Value: ");
    scanf("%d",&b);
    printf("Enter your 3rd Value: ");
    scanf("%d",&c);
    Greatest(a,b,c);
    return 0;
}

