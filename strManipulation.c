// we can directly print a char[] without specifing any format specifier if we only want to print that char[]
// we cannot even include '\n' (newline charactor)
// we can also use "%s" format specifier for char[]
// "%c" for a char

#include<stdio.h>
void main() {
    char *string[20] = { "one", "two", "three"};
    char helllo[10] = "Helo!";
    printf(helllo);
    printf("\n");
    printf(string[0]);
    printf("\n");
    printf("%s\n",string[1]);
    printf("%c\n",string[2][2]);
}

// the output will be..
// Helo!
// one
// two
// r