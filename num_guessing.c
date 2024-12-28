#include <stdio.h>

int main() {
  int secretNum = 5;
  int guessCount = 0;
  int guess;
  int guessLimit = 3;
  
  while (guess != secretNum && guessCount < guessLimit) {
    printf("Enter a number: ");
    scanf("%d", &guess);
    guessCount++;
  }

  if (guessCount < guessLimit) {
    printf("You won!\nYou guessed %d times.", guessCount);
  } else {
    printf("You lost!\nThe number was %d.", secretNum);
  }
  
  return 0;
}