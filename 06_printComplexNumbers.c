#include<stdio.h>

int main() {
    int real, imaginary;
    printf("Enter the real part of the number: ");
    scanf("%d", &real);
    printf("Enter the imaginary part of the number: ");
    scanf("%d", &imaginary);

    printf("Complex Number is %d+%di\n", real, imaginary);
    return 0;
}

// the output will be...

// Enter the real part of the number: 5
// Enter the imaginary part of the number: 3
// Complex Number is 5+3i