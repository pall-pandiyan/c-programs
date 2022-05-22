#include<stdio.h>
#include<stdlib.h>

int main(void) {
  printf("Please enter a line: ");
  char *line = NULL;
  size_t len = 0;
  ssize_t lineSize = 0;

  lineSize = getline(&line, &len, stdin);
  printf("You entered '%s', which has %zu chars.\n", line, lineSize - 1);
  free(line);
  return 0;
}


// the output will be...

// Please enter a line: hello how you doing?
// You entered 'hello how you doing?', which has 20 chars.
