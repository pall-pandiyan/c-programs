// this program will get a input from user and count down to 1

#include<stdio.h>
int main() {
    int target;
    scanf("%d",&target);
    for(int i=target; i>0; i--) {
        printf("%d ",i);
    }
    printf("\n");
    return 1;
}

// input = 5
// output = 5 4 3 2 1
