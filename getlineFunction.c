#include<stdio.h>
#include<stdlib.h>

int main(void) {
<<<<<<< HEAD
  printf("Please enter a line: ");
=======
  printf("Please enter a line:\n");
>>>>>>> 4769936b55f87aeda8a29d3aa601af82b4928d76
  char *line = NULL;
  size_t len = 0;
  ssize_t lineSize = 0;

  lineSize = getline(&line, &len, stdin);
<<<<<<< HEAD
  printf("You entered '%s', which has %zu chars.\n", line, lineSize - 1);
  free(line);
  return 0;
}


// the output will be...

// Please enter a line: hello how you doing?
// You entered 'hello how you doing?', which has 20 chars.
=======
  printf("You entered %s, which has %zu chars.\n", line, lineSize - 1);
  free(line);
  return 0;
}
>>>>>>> 4769936b55f87aeda8a29d3aa601af82b4928d76
