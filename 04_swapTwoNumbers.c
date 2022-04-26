#include<stdio.h>

int main() {
    printf("Enter two numbers: ");
    int a,b;
    scanf("%d %d", &a,&b);
    printf("Before swapping A=%d and B=%d",a,b);

    int temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping A=%d and B=%d\n",a,b);
    return 0;
}

// the output will be...

// Enter two numbers: 25 35
// Before swapping A=25 and B=35
// After swapping A=35 and B=25