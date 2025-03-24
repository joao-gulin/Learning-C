
#include <stdio.h>
void guessNumber(int guess) {
  int number_to_guess = 555;

  if (guess < 555) {
    printf("Your guess is too low \n");
  } else if (guess > 555) {
    printf("Your guess is too high \n");
  } else {
    printf("Correct!! \n");
  }
}

int main() {
  guessNumber(500);
  guessNumber(600);
  guessNumber(555);
}
