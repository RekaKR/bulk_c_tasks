#include <stdio.h>

int main() {
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  luckyNumbers[1] = 1;

  printf("%d\n", luckyNumbers[1]);

  return 0;
}