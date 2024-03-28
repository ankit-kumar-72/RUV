#include<stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i = 0; i < n; i++){
        printf("Enter the value at position %d: ", i);
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum)
{
    printf("The array entered is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("The sum of %d numbers is: %d\n", n, sum);
}

int main()
{
    int n = input_array_size();
    int arr[n];
    input_array(n, arr);
    int sum = sum_n_array(n, arr);
    output(n, arr, sum);
    return 0;
}
