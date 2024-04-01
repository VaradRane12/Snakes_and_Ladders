#include <stdio.h>
#include <stdlib.h>

int main() {
  int randomNumber;

  // Seed the random number generator
  srand(time(NULL));

  // Generate a random number between 0 and 5
  randomNumber = rand() % 6;

  // Add 1 to get a random number between 1 and 6
  randomNumber += 1;

  // Print the random number
  printf("The random number is %d\n", randomNumber);

  return 0;
}