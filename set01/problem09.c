#include <stdio.h>
#include <math.h>

float input()
{
    float n;
    printf("Enter the value of n: ");
    scanf("%f", &n);
    return n;
};
float square_root(float n)
{
    float a = n;
    if (n < 0) {
        printf("Error: Cannot calculate square root of a negative number\n");
        return 1;
    }
    while((a * a - n)>0.01){
        a = 0.5 * (a + (n/a));
    }
    return a;
};
void output(float n, float sqrroot)
{
    printf("Square root of %.1f is: %.1f\n", n, sqrroot);
};

int main() {
    float n = input();
    float sqrroot = square_root(n);
    output( n, sqrroot);
    return 0;
}
