#include <stdio.h>
//#include <string.h>

typedef struct Student {
  char* name;
  //char name2[50];
  char* major;
  int age;
  double gpa;
} Student;

int main() {
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  luckyNumbers[1] = 1;

  printf("%d\n", luckyNumbers[1]);

  // -----------------------------------------

  Student student1;

  student1.name = "Alma";
  //strcpy(student1.name2, "Alma2");
  student1.major = "Math";
  student1.age = 20;
  student1.gpa = 4.2;

  printf("%s", student1.name);


  return 0;
}