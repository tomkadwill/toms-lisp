#include <stdio.h>

/* Declare a static buffet for user input of maximum size 2048 */
static char input[2048];

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("toms-lisp Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while(1) {

    /* Output or prompt */
    fputs("toms-lisp> ", stdout);

    /* Read a line of user input of max size 2048 */
    fgets(input, 2048, stdin);

    /* Echo input back to the user */
    printf("No you're a %s", input);
  }

  return 0;
}