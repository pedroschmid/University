#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float perimeterCentimeters, perimeterInches, perimeterYards, Base, Height;

  printf("Enter base value:\n");
  scanf("%f", &Base);
  printf("Enter height value:\n");
  scanf("%f", &Height);

  perimeterCentimeters = 2 * (Base + Height);
  perimeterInches = perimeterCentimeters / 2.54;
  perimeterYards = perimeterCentimeters / 91.44;

  printf("The perimeter in centimeters is: %.2f\n", perimeterCentimeters);
  printf("The perimeter in inches is: %.2f\n", perimeterInches);
  printf("The perimeter in yards is: %.2f\n", perimeterYards);

  return 0;
}
