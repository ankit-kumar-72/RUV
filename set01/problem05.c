#include<stdio.h>
int input()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    return n;
};
int compare(int a, int b, int c)
{
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
};

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d, %d and %d is %d",a,b,c,largest);
};

int main()
{
    int a,b,c;
    a = input();
    b = input();
    c = input();
    int largest = compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
