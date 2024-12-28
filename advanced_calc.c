#include <stdio.h>
#include <math.h>

void input(double* num1, double* num2, char* operator) {
  printf("Enter the base number: ");
  scanf("%lf", num1);

  printf("Enter an operator (+, -, *, /, ^): ");
  scanf(" %c", operator);

  printf("Enter the second number: ");
  scanf("%lf", num2);

  if ((*operator == ':' || *operator == '/') && (*num2 == 0)) {
    printf("You have entered 0 as the divisor, which is not allowed. Please try again.\nEnter the second number: ");
    scanf("%lf", num2);
  }
}

double calc(double a, double b, char operator) {
  if (operator == '+') {
    return a+b;
  } else if (operator == '-') {
    return a-b;
  } else if (operator == '*' || operator == 'x' || operator == 'X') {
    return a*b;
  } else if (operator == ':' || operator == '/') {
    return a/b;
  } else if (operator == '^') {
    return pow(a, b);
  } else {
    printf("You have entered an invalid operator. Please try again.\n");
    input(&a, &b, &operator);
    return calc(a, b, operator);
  }
}

int main() {
  double num1, num2;
  char operator;

  input(&num1, &num2, &operator);

  printf("%f", calc(num1, num2, operator));

  return 0;
}