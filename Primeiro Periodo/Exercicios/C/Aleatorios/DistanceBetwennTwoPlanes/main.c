#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float x1, x2, y1, y2, Distance;

  printf("Enter the value of x1:\n");
  scanf("%f", &x1);
  printf("Enter the value of x2:\n");
  scanf("%f", &x2);
  printf("Enter the value of y1:\n");
  scanf("%f", &y1);
  printf("Enter the value of y2:\n");
  scanf("%f", &y2);

  Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("The distance between the two points inserted is:%2.f", Distance);
}
