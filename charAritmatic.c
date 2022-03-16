// char data type can store a character i.e: 'a' or '8'
// even '\n' (newline character) '\t' (tab character)
// we can also access the int value of the character while
// printing using '%d'. we can also perform +/- (addition
// or subtraction) in char data type.

#include<stdio.h>
void main() {
    char c1='a', c2='A';
    int i=c2-c1;
    printf("A-a as int : %d\n", i);
    //printf("%d",(int)'A');
    c2 = c1+10;
    printf("a+10 as char: %c\n",c2);
    printf("a+10 as int : %d\n",c2);
}
