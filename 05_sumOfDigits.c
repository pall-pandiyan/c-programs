#include<stdio.h>

int main() {
    int num, sum=0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
}

// the output will be...

// Please enter a number: 5451 
// Sum of digits is: 15