#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float Area, Lenght, PI, Radius;
  PI = 3.14;

  printf("Enter the Radius value:\n");
  scanf("%f", &Radius);

  Area = PI * pow(Radius, 2);
  Lenght = 2 * PI * Radius;

  printf("The area of the circle is: %2.f\n", Area);
  printf("The length of the circle is: %2.f", Lenght);

  return 0;
}
