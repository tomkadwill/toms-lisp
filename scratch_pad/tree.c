#include <stdio.h>
#include <editline/readline.h>

/* 
 * Example program using a recursive function.
 *
 * */

struct Tree{
  int branches;
  int leaves;
  struct Tree;
};

void calculate_leaves(int test[6][1], int count) {
  if (count <= 5) {
    printf("branch %d has %d leaves\n", count + 1, test[count][0]);
    calculate_leaves(test, count + 1);
  } else {
    return;
  }
}

int main(int argc, char** argv) {
  int test[6][1]={
    {11},
    {12},
    {13},
    {14},
    {15},
    {16},
  };

  calculate_leaves(test, 0);

  return 0;
}
