#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<5; i++) {
        if((char)arr[i] == '5') {
            printf("%d ",arr[i]);
        } else {
            printf("FAIL ");
        }
    }
    printf("\n");
    return 0;
}

"""
the output will be...
FAIL FAIL FAIL FAIL FAIL
"""