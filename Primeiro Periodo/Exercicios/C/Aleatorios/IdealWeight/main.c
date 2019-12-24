#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float Height, idealWeight;
  char Gender;

  printf("Enter your Gender:\nM = Male\nF = Female\n");
  scanf("%c", &Gender);
  printf("Enter your height:\n");
  scanf("%f", &Height);

  if (Gender == 'M') {
    idealWeight = (72.7 * Height) - 58;
    printf("The ideal male weight is: %.1f", idealWeight);
  } else {
    idealWeight = (62.1 * Height) - 44;
    printf("The ideal female weight is: %.1f", idealWeight);
  }
  return 0;
}
