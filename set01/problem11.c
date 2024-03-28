#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex() {
    Complex a;
    printf("Enter real and imaginary parts of the complex number: ");
    scanf("%f %f", &a.real, &a.imaginary);
    return a;
}

Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

void output(Complex a, Complex b, Complex sum) {
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
    Complex num1, num2, sum;
    num1 = input_complex();
    num2 = input_complex();
    sum = add_complex(num1, num2);
    output(num1, num2, sum);
    return 0;
}
