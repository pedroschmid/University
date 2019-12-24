#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#define PI 3.14159

int main() {
  float Volume, Radius;

  printf("Enter the Radius value:\n");
  scanf("%f", &Radius);

  Volume = 4 * PI * pow(Radius, 3) / 3;

  printf("The volume of the sphere is: %2.f", Volume);

  return 0;
}
