#include <stdio.h>

#include <stdlib.h>

#include <math.h>

// PI
#define PI 3.14159

int main() {
  float Area, Volume, Radius;

  printf("Enter radius value\n");
  scanf("%f", &Radius);

  Area = 4 * PI * pow(Radius, 2);
  Volume = 4 * PI * pow(Radius, 3) / 3.0;

  printf("The sphere area is: %.2f\n", Area);
  printf("The volume of the sphere is: %.2f\n", Volume);

  return 0;
}
