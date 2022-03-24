// escape charactors in C usually will appear within double quote
// a charactor followed by back slash
// \n means new line charactor
// \b means backspace charactor (delete a char in left)
// \r means replace (will replace string)

#include<stdio.h>
int main() {
    printf("\nab");
    printf("\bse");
    printf("\rby");
    printf("\n");
    return 1;
}

// the output of this program is..
// bye
//
//
// explanation
// first printf will print "ab" in a newline
// second printf will first remove 'b' and then print se, so the current output will be "ase"
// th third printf will start overwrite content from start, so the output is "bye"
