#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  int Number, Square;

  printf("Enter number value\n");
  scanf("%i", &Number);

  Square = pow(Number, 2);

  if (Square % 11 == 0) {
    printf("The number entered is multiple of 11");
  } else if (Square % 13 == 0) {
    printf("The number entered is multiple of 13");
  } else {
    printf("The number entered is not a multiple of 11 or 13!");
  }

  return 0;
}
