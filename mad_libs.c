#include <stdio.h>

int main() {
  char color[20];
  char plurarNoun[20];
  char name[20];

  printf("Enter a color: ");
  scanf("%s", color);

  printf("Enter a plurar noun: ");
  scanf("%s", plurarNoun);

  printf("Enter a celebrity: ");
  fgetc(stdin);
  fgets(name, sizeof(name), stdin);

  printf("\nRoses are %s\n", color);
  printf("%s are blue\n", plurarNoun);
  printf("I love %s", name);

  return 0;
}