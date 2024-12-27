#include <stdio.h>

int main() {
  double a, b;
  printf("Add a number: ");
  scanf("%lf", &a);
  printf("Add a number: ");
  scanf("%lf", &b);

  printf("The sum: %f", a+b);
  return 0;
}