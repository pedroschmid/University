#include <stdio.h>

#include <stdlib.h>

#include <math.h>

// cons PI
#
define PI 3.14159

int main() {
  float baseArea, sideArea, Height, Radius, totalArea, Volume, volumeMeters, Liters;

  printf("Insert the radius value:\n");
  scanf("%f", &Radius);
  printf("Insert the height value:\n");
  scanf("%f", &Height);

  baseArea = PI * pow(Radius, 2);
  sideArea = 2 * PI * Radius * Height;
  totalArea = (2 * baseArea) + sideArea;
  Volume = baseArea * Height;
  volumeMeters = Volume / 1000;
  Liters = totalArea / 3.0;

  printf("Volume: %.2f\n", Volume);
  printf("Volume in meters: %.2f\n", volumeMeters);

  // INCOMPLETE!

  return 0;
}
