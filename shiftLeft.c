// the "<<" is called shift left operator, there is also a ">>" shift right operator
// basically all this operator does is shifting binary value to the given target
// in this example -1 (0001) will be shifted left 3 times into -8 (1000)
// %x is format specifier for unsigned hex, so minus values connts down from hex value
// 'ffffffff' is -1 and 'fffffff8' is -8

#include<stdio.h>

int main() {
    printf("%x\n",-1);
    printf("%x \n",-1<<3);
    printf("%d \n",-1<<3);
    printf("\n");
    return 1;
}

// the output will be..
// ffffffff
// fffffff8 
// -8