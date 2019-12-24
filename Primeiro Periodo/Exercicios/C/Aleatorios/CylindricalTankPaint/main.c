#include <stdio.h>

#include <stdlib.h>

#include <math.h>

// cons PI
#define PI 3.14159

int main() {
  float baseArea, sideArea, Height, Radius, totalArea, Liters, Cans, totalCost;

  printf("Insert the radius value:\n");
  scanf("%f", &Radius);
  printf("Insert the height value:\n");
  scanf("%f", &Height);

  baseArea = PI * pow(Radius, 2);
  sideArea = 2 * PI * Radius * Height;
  totalArea = (2 * baseArea) + sideArea;
  Liters = totalArea / 3.0;
  Cans = Liters / 5.0;
  totalCost = Cans * 50.0;

  printf("Total Area: %.2f\n", totalArea);
  printf("Liters: %.2f\n", Liters);
  printf("Cans: %.2f\n", Cans);
  printf("Total Cost: $ %.2f\n", totalCost);

  return 0;
}
