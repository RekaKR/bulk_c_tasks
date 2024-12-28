#include <stdio.h>

void sayHi(int limit, char name[], int age) {
  printf("Hello %s", name);

  if (age > limit) {
    int diff = age-limit;
    printf("You are %d year(s) above the age limit. You may go.", diff);
  } else if (age == limit) {
    printf("Congarts! You reached the age limit. You may go.");
  } else {
    int diff = limit-age;
    printf("You are %d year(s) under the age limit. You can't go.", diff);
  }
}

int main() {
  char name[20];
  int age, limit;

  printf("Give an age limit: ");
  scanf("%d", &limit);

  printf("Give a name: ");
  fgetc(stdin);
  fgets(name, sizeof(name), stdin);

  printf("Give your age: ");
  scanf("%d", &age);

  sayHi(limit, name, age);

  return 0;
}