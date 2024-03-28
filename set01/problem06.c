#include<stdio.h>
void input(int *a, int *b, int *c) {
    printf("Enter your 1st number: ");
    scanf("%d", a);
    printf("Enter your 2nd number: ");
    scanf("%d", b);
    printf("Enter your 3rd number: ");
    scanf("%d", c);
}

void compare(int a, int b, int c, int *largest) {
    if (a >= b && a >= c) {
        *largest = a;
    } else if (b >= c) {
        *largest = b;
    } else {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("The largest of %d, %d, and %d is %d\n", a, b, c, largest);
}

int main() {
    int a, b, c, largest;
    input(&a, &b, &c);
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}
