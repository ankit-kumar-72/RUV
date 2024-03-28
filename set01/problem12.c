#include<stdio.h>

struct _complex {
    float real, imaginary;
};
typedef struct _complex Complex;

int get_n() {
    int n;
    printf("Enter the Value of n: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex a;
    printf("Enter real and imaginary parts of the complex number: ");
    scanf("%f %f", &a.real, &a.imaginary);
    return a;   
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter the real and imaginary part: ");
    for(int i = 0; i < n; i++) {
        scanf("%f %f", &c[i].real, &c[i].imaginary);
    }
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0, 0}; // Initialize result to 0+0i
    for(int i = 0; i < n; i++) {
        result.real += c[i].real;
        result.imaginary += c[i].imaginary;
    }
    return result;
}

void output(int n, Complex c[n], Complex result) {
    printf("Sum of %d complex numbers: %.2f + %.2fi\n", n, result.real, result.imaginary);
}

int main() {
    int n;
    n = get_n();
    Complex numbers[n];
    input_n_complex(n, numbers);
    Complex sum = add_n_complex(n, numbers);
    output(n, numbers, sum);
    return 0;
}