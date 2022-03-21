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