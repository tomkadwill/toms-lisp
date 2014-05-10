#include <stdio.h>
#include <stdlib.h>

/* if we are compiling on windows */
#ifdef _WIN32

#include <string.h>

static char buffer[2048];

/* fake readline function */
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

/* fake add_history function */
void add_history(char* unused) {}

/* otherwise include the editline headers */
#else

#include <editline/readline.h>

#endif

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("toms-lisp Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while(1) {

    /* Output or prompt */
    char* input = readline("toms-lisp> ");
    add_history(input);

    printf("No you're a %s", input);
    free(input);

  }

  return 0;
}
